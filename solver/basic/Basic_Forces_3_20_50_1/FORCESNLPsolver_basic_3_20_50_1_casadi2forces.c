/*
 * CasADi to FORCES Template - missing information to be filled in by createCasadi.m 
 * (C) embotech AG, Zurich, Switzerland, 2013-2020. All rights reserved.
 *
 * This file is part of the FORCES client, and carries the same license.
 */ 

#ifdef __cplusplus
extern "C" {
#endif
    
#include "FORCESNLPsolver_basic_3_20_50_1/include/FORCESNLPsolver_basic_3_20_50_1.h"

#define casadi_real FORCESNLPsolver_basic_3_20_50_1_float



/* prototyes for models */
extern void FORCESNLPsolver_basic_3_20_50_1_model_1(const FORCESNLPsolver_basic_3_20_50_1_float **arg, FORCESNLPsolver_basic_3_20_50_1_float **res);
extern void FORCESNLPsolver_basic_3_20_50_1_model_1_sparsity(solver_int32_default i, solver_int32_default *nrow, solver_int32_default *ncol, const solver_int32_default **colind, const solver_int32_default **row);
extern void FORCESNLPsolver_basic_3_20_50_1_model_20(const FORCESNLPsolver_basic_3_20_50_1_float **arg, FORCESNLPsolver_basic_3_20_50_1_float **res);
extern void FORCESNLPsolver_basic_3_20_50_1_model_20_sparsity(solver_int32_default i, solver_int32_default *nrow, solver_int32_default *ncol, const solver_int32_default **colind, const solver_int32_default **row);
    

/* copies data from sparse matrix into a dense one */
static void sparse2fullcopy(solver_int32_default nrow, solver_int32_default ncol, const solver_int32_default *colidx, const solver_int32_default *row, FORCESNLPsolver_basic_3_20_50_1_float *data, FORCESNLPsolver_basic_3_20_50_1_float *out)
{
    solver_int32_default i, j;
    
    /* copy data into dense matrix */
    for(i=0; i<ncol; i++)
    {
        for( j=colidx[i]; j < colidx[i+1]; j++ )
        {
            out[i*nrow + row[j]] = data[j];
        }
    }
}

/* CasADi - FORCES interface */
extern void FORCESNLPsolver_basic_3_20_50_1_casadi2forces(FORCESNLPsolver_basic_3_20_50_1_float *x,        /* primal vars                                         */
                                 FORCESNLPsolver_basic_3_20_50_1_float *y,        /* eq. constraint multiplers                           */
                                 FORCESNLPsolver_basic_3_20_50_1_float *l,        /* ineq. constraint multipliers                        */
                                 FORCESNLPsolver_basic_3_20_50_1_float *p,        /* parameters                                          */
                                 FORCESNLPsolver_basic_3_20_50_1_float *f,        /* objective function (scalar)                         */
                                 FORCESNLPsolver_basic_3_20_50_1_float *nabla_f,  /* gradient of objective function                      */
                                 FORCESNLPsolver_basic_3_20_50_1_float *c,        /* dynamics                                            */
                                 FORCESNLPsolver_basic_3_20_50_1_float *nabla_c,  /* Jacobian of the dynamics (column major)             */
                                 FORCESNLPsolver_basic_3_20_50_1_float *h,        /* inequality constraints                              */
                                 FORCESNLPsolver_basic_3_20_50_1_float *nabla_h,  /* Jacobian of inequality constraints (column major)   */
                                 FORCESNLPsolver_basic_3_20_50_1_float *hess,     /* Hessian (column major)                              */
                                 solver_int32_default stage,     /* stage number (0 indexed)                            */
								 solver_int32_default iteration /* iteration number of solver                          */)
{
    /* CasADi input and output arrays */
    const FORCESNLPsolver_basic_3_20_50_1_float *in[4];
    FORCESNLPsolver_basic_3_20_50_1_float *out[7];
    
    /* temporary storage for casadi sparse output */
    FORCESNLPsolver_basic_3_20_50_1_float this_f;
    FORCESNLPsolver_basic_3_20_50_1_float nabla_f_sparse[9];
    FORCESNLPsolver_basic_3_20_50_1_float h_sparse[6];
    FORCESNLPsolver_basic_3_20_50_1_float nabla_h_sparse[18];
    FORCESNLPsolver_basic_3_20_50_1_float c_sparse[9];
    FORCESNLPsolver_basic_3_20_50_1_float nabla_c_sparse[23];
            
    
    /* pointers to row and column info for 
     * column compressed format used by CasADi */
    solver_int32_default nrow, ncol;
    const solver_int32_default *colind, *row;
    
    /* set inputs for CasADi */
    in[0] = x;
    in[1] = p; /* maybe should be made conditional */
    in[2] = l; /* maybe should be made conditional */     
    in[3] = y; /* maybe should be made conditional */

    	 /* set outputs for CasADi */
	out[0] = &this_f;
	out[1] = nabla_f_sparse;
	

	 if ((stage >= 0 && stage < 19))
	 {
		 /* set inputs */
		 out[2] = h_sparse;
		 out[3] = nabla_h_sparse;
		 out[4] = c_sparse;
		 out[5] = nabla_c_sparse;
		 

		 /* call CasADi */
		 FORCESNLPsolver_basic_3_20_50_1_model_1(in, out);

		 /* copy to dense */
		 if( nabla_f )
		 {
			 FORCESNLPsolver_basic_3_20_50_1_model_1_sparsity(3, &nrow, &ncol, &colind, &row);
			 sparse2fullcopy(nrow, ncol, colind, row, nabla_f_sparse, nabla_f);
		 }
		 if( c )
		 {
			 FORCESNLPsolver_basic_3_20_50_1_model_1_sparsity(6, &nrow, &ncol, &colind, &row);
			 sparse2fullcopy(nrow, ncol, colind, row, c_sparse, c);
		 }
		 if( nabla_c )
		 {
			 FORCESNLPsolver_basic_3_20_50_1_model_1_sparsity(7, &nrow, &ncol, &colind, &row);
			 sparse2fullcopy(nrow, ncol, colind, row, nabla_c_sparse, nabla_c);
		 }
		 if( h )
		 {
			 FORCESNLPsolver_basic_3_20_50_1_model_1_sparsity(4, &nrow, &ncol, &colind, &row);
			 sparse2fullcopy(nrow, ncol, colind, row, h_sparse, h);
		 }
		 if( nabla_h )
		 {
			 FORCESNLPsolver_basic_3_20_50_1_model_1_sparsity(5, &nrow, &ncol, &colind, &row);
			 sparse2fullcopy(nrow, ncol, colind, row, nabla_h_sparse, nabla_h);
		 }
		 
	 }

	 if ((stage >= 19 && stage < 20))
	 {
		 /* set inputs */
		 out[2] = h_sparse;
		 out[3] = nabla_h_sparse;
		 /* call CasADi */
		 FORCESNLPsolver_basic_3_20_50_1_model_20(in, out);

		 /* copy to dense */
		 if( nabla_f )
		 {
			 FORCESNLPsolver_basic_3_20_50_1_model_20_sparsity(3, &nrow, &ncol, &colind, &row);
			 sparse2fullcopy(nrow, ncol, colind, row, nabla_f_sparse, nabla_f);
		 }
		 if( h )
		 {
			 FORCESNLPsolver_basic_3_20_50_1_model_20_sparsity(4, &nrow, &ncol, &colind, &row);
			 sparse2fullcopy(nrow, ncol, colind, row, h_sparse, h);
		 }
		 if( nabla_h )
		 {
			 FORCESNLPsolver_basic_3_20_50_1_model_20_sparsity(5, &nrow, &ncol, &colind, &row);
			 sparse2fullcopy(nrow, ncol, colind, row, nabla_h_sparse, nabla_h);
		 }
		 
	 }

         
    
    /* add to objective */
    if( f )
    {
        *f += this_f;
    }
}

#ifdef __cplusplus
} /* extern "C" */
#endif