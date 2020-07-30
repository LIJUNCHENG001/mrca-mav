/* This function was automatically generated by CasADi */
#ifdef __cplusplus
extern "C" {
#endif

#ifdef CODEGEN_PREFIX
#define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
#define _NAMESPACE_CONCAT(NS, ID) NS ## ID
#define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else /* CODEGEN_PREFIX */
#define CASADI_PREFIX(ID) FORCESNLPsolver_basic_3_20_50_1_model_1_ ## ID
#endif /* CODEGEN_PREFIX */

#include <math.h>

#include "FORCESNLPsolver_basic_3_20_50_1/include/FORCESNLPsolver_basic_3_20_50_1.h"

#define PRINTF printf
FORCESNLPsolver_basic_3_20_50_1_float CASADI_PREFIX(sq)(FORCESNLPsolver_basic_3_20_50_1_float x) { return x*x;}
#define sq(x) CASADI_PREFIX(sq)(x)

FORCESNLPsolver_basic_3_20_50_1_float CASADI_PREFIX(sign)(FORCESNLPsolver_basic_3_20_50_1_float x) { return x<0 ? -1 : x>0 ? 1 : x;}
#define sign(x) CASADI_PREFIX(sign)(x)

static const solver_int32_default CASADI_PREFIX(s0)[] = {15, 1, 0, 15, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
#define s0 CASADI_PREFIX(s0)
static const solver_int32_default CASADI_PREFIX(s1)[] = {42, 1, 0, 42, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41};
#define s1 CASADI_PREFIX(s1)
static const solver_int32_default CASADI_PREFIX(s2)[] = {1, 1, 0, 1, 0};
#define s2 CASADI_PREFIX(s2)
static const solver_int32_default CASADI_PREFIX(s3)[] = {1, 15, 0, 1, 2, 3, 3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0};
#define s3 CASADI_PREFIX(s3)
static const solver_int32_default CASADI_PREFIX(s4)[] = {6, 1, 0, 6, 0, 1, 2, 3, 4, 5};
#define s4 CASADI_PREFIX(s4)
static const solver_int32_default CASADI_PREFIX(s5)[] = {6, 15, 0, 0, 0, 0, 0, 3, 6, 10, 14, 18, 18, 18, 18, 18, 18, 18, 0, 1, 2, 3, 4, 5, 0, 3, 4, 5, 1, 3, 4, 5, 2, 3, 4, 5};
#define s5 CASADI_PREFIX(s5)
static const solver_int32_default CASADI_PREFIX(s6)[] = {9, 1, 0, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8};
#define s6 CASADI_PREFIX(s6)
static const solver_int32_default CASADI_PREFIX(s7)[] = {9, 15, 0, 2, 4, 6, 7, 7, 7, 8, 9, 10, 12, 14, 16, 19, 22, 23, 4, 6, 3, 7, 2, 5, 8, 0, 1, 2, 0, 3, 1, 4, 2, 5, 1, 4, 6, 0, 3, 7, 8};
#define s7 CASADI_PREFIX(s7)
/* evaluate_stages */
solver_int32_default FORCESNLPsolver_basic_3_20_50_1_model_1(const FORCESNLPsolver_basic_3_20_50_1_float **arg, FORCESNLPsolver_basic_3_20_50_1_float **res) 
{
    FORCESNLPsolver_basic_3_20_50_1_float a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59,a60,a61,a62,a63,a64,a65,a66,a67,a68,a69,a70,a71,a72,a73,a74,a75,a76,a77,a78,a79,a80,a81,a82,a83,a84,a85,a86,a87,a88;
    a0=arg[1] ? arg[1][7] : 0;
    a1=arg[0] ? arg[0][6] : 0;
    a2=(a0-a1);
    a3=arg[1] ? arg[1][14] : 0;
    a2=(a2*a3);
    a4=(a0-a1);
    a5=(a2*a4);
    a6=arg[1] ? arg[1][8] : 0;
    a7=arg[0] ? arg[0][7] : 0;
    a8=(a6-a7);
    a8=(a8*a3);
    a9=(a6-a7);
    a10=(a8*a9);
    a5=(a5+a10);
    a10=arg[1] ? arg[1][9] : 0;
    a11=arg[0] ? arg[0][8] : 0;
    a12=(a10-a11);
    a12=(a12*a3);
    a13=(a10-a11);
    a14=(a12*a13);
    a5=(a5+a14);
    a14=arg[1] ? arg[1][3] : 0;
    a0=(a0-a14);
    a0=sq(a0);
    a14=arg[1] ? arg[1][4] : 0;
    a6=(a6-a14);
    a6=sq(a6);
    a0=(a0+a6);
    a6=arg[1] ? arg[1][5] : 0;
    a10=(a10-a6);
    a10=sq(a10);
    a0=(a0+a10);
    a10=1.;
    a0=fmax(a0,a10);
    a5=(a5/a0);
    a6=arg[1] ? arg[1][10] : 0;
    a14=arg[0] ? arg[0][14] : 0;
    a6=(a6-a14);
    a15=sq(a6);
    a15=(a3*a15);
    a5=(a5+a15);
    a15=arg[0] ? arg[0][0] : 0;
    a16=2.0943951023931956e-01;
    a17=(a15/a16);
    a18=arg[1] ? arg[1][15] : 0;
    a19=(a17*a18);
    a20=(a19*a17);
    a21=arg[0] ? arg[0][1] : 0;
    a16=(a21/a16);
    a22=(a16*a18);
    a23=(a22*a16);
    a20=(a20+a23);
    a23=arg[0] ? arg[0][2] : 0;
    a24=(a23*a18);
    a25=(a24*a23);
    a20=(a20+a25);
    a25=1.5707963267948966e+00;
    a25=(a23/a25);
    a26=(a25*a18);
    a27=(a26*a25);
    a20=(a20+a27);
    a5=(a5+a20);
    a20=arg[1] ? arg[1][18] : 0;
    a27=(a1-a20);
    a28=sq(a27);
    a29=arg[1] ? arg[1][11] : 0;
    a30=arg[1] ? arg[1][21] : 0;
    a31=(a29+a30);
    a31=sq(a31);
    a28=(a28/a31);
    a32=arg[1] ? arg[1][19] : 0;
    a33=(a7-a32);
    a34=sq(a33);
    a35=arg[1] ? arg[1][12] : 0;
    a36=arg[1] ? arg[1][22] : 0;
    a37=(a35+a36);
    a37=sq(a37);
    a34=(a34/a37);
    a28=(a28+a34);
    a34=arg[1] ? arg[1][20] : 0;
    a38=(a11-a34);
    a39=sq(a38);
    a40=arg[1] ? arg[1][13] : 0;
    a41=arg[1] ? arg[1][23] : 0;
    a42=(a40+a41);
    a42=sq(a42);
    a39=(a39/a42);
    a28=(a28+a39);
    a28=sqrt(a28);
    a39=arg[1] ? arg[1][25] : 0;
    a39=(a28-a39);
    a43=arg[1] ? arg[1][24] : 0;
    a39=(a43*a39);
    a39=exp(a39);
    a44=(a10+a39);
    a45=arg[1] ? arg[1][16] : 0;
    a46=(a45/a44);
    a47=(a46/a44);
    a48=arg[1] ? arg[1][26] : 0;
    a49=(a1-a48);
    a50=sq(a49);
    a51=arg[1] ? arg[1][29] : 0;
    a52=(a29+a51);
    a52=sq(a52);
    a50=(a50/a52);
    a53=arg[1] ? arg[1][27] : 0;
    a54=(a7-a53);
    a55=sq(a54);
    a56=arg[1] ? arg[1][30] : 0;
    a57=(a35+a56);
    a57=sq(a57);
    a55=(a55/a57);
    a50=(a50+a55);
    a55=arg[1] ? arg[1][28] : 0;
    a58=(a11-a55);
    a59=sq(a58);
    a60=arg[1] ? arg[1][31] : 0;
    a61=(a40+a60);
    a61=sq(a61);
    a59=(a59/a61);
    a50=(a50+a59);
    a50=sqrt(a50);
    a59=arg[1] ? arg[1][33] : 0;
    a59=(a50-a59);
    a62=arg[1] ? arg[1][32] : 0;
    a59=(a62*a59);
    a59=exp(a59);
    a63=(a10+a59);
    a64=(a45/a63);
    a65=(a64/a63);
    a66=(a47+a65);
    a67=arg[1] ? arg[1][34] : 0;
    a68=(a1-a67);
    a69=sq(a68);
    a70=arg[1] ? arg[1][37] : 0;
    a71=(a29+a70);
    a71=sq(a71);
    a69=(a69/a71);
    a72=arg[1] ? arg[1][35] : 0;
    a73=(a7-a72);
    a74=sq(a73);
    a75=arg[1] ? arg[1][38] : 0;
    a76=(a35+a75);
    a76=sq(a76);
    a74=(a74/a76);
    a69=(a69+a74);
    a74=arg[1] ? arg[1][36] : 0;
    a77=(a11-a74);
    a78=sq(a77);
    a79=arg[1] ? arg[1][39] : 0;
    a80=(a40+a79);
    a80=sq(a80);
    a78=(a78/a80);
    a69=(a69+a78);
    a69=sqrt(a69);
    a78=arg[1] ? arg[1][41] : 0;
    a78=(a69-a78);
    a81=arg[1] ? arg[1][40] : 0;
    a78=(a81*a78);
    a78=exp(a78);
    a82=(a10+a78);
    a45=(a45/a82);
    a83=(a45/a82);
    a66=(a66+a83);
    a5=(a5+a66);
    a66=10.;
    a84=arg[1] ? arg[1][17] : 0;
    a66=(a66*a84);
    a85=arg[0] ? arg[0][4] : 0;
    a86=sq(a85);
    a86=(a66*a86);
    a87=arg[0] ? arg[0][5] : 0;
    a88=sq(a87);
    a88=(a84*a88);
    a86=(a86+a88);
    a5=(a5+a86);
    if (res[0]!=0) res[0][0]=a5;
    a17=(a18*a17);
    a19=(a19+a17);
    a17=4.7746482927568596e+00;
    a19=(a17*a19);
    if (res[1]!=0) res[1][0]=a19;
    a16=(a18*a16);
    a22=(a22+a16);
    a17=(a17*a22);
    if (res[1]!=0) res[1][1]=a17;
    a25=(a18*a25);
    a26=(a26+a25);
    a25=6.3661977236758138e-01;
    a25=(a25*a26);
    a25=(a25+a24);
    a18=(a18*a23);
    a25=(a25+a18);
    if (res[1]!=0) res[1][2]=a25;
    a25=(a85+a85);
    a25=(a25*a66);
    if (res[1]!=0) res[1][3]=a25;
    a25=(a87+a87);
    a25=(a25*a84);
    if (res[1]!=0) res[1][4]=a25;
    a68=(a68+a68);
    a83=(a83/a82);
    a45=(a45/a82);
    a45=(a45/a82);
    a83=(a83+a45);
    a78=(a78*a83);
    a81=(a81*a78);
    a69=(a69+a69);
    a81=(a81/a69);
    a71=(a81/a71);
    a68=(a68*a71);
    a49=(a49+a49);
    a65=(a65/a63);
    a64=(a64/a63);
    a64=(a64/a63);
    a65=(a65+a64);
    a59=(a59*a65);
    a62=(a62*a59);
    a50=(a50+a50);
    a62=(a62/a50);
    a52=(a62/a52);
    a49=(a49*a52);
    a68=(a68+a49);
    a27=(a27+a27);
    a47=(a47/a44);
    a46=(a46/a44);
    a46=(a46/a44);
    a47=(a47+a46);
    a39=(a39*a47);
    a43=(a43*a39);
    a28=(a28+a28);
    a43=(a43/a28);
    a31=(a43/a31);
    a27=(a27*a31);
    a68=(a68+a27);
    a2=(a2/a0);
    a68=(a68+a2);
    a4=(a4/a0);
    a4=(a3*a4);
    a68=(a68+a4);
    a68=(-a68);
    if (res[1]!=0) res[1][5]=a68;
    a73=(a73+a73);
    a76=(a81/a76);
    a73=(a73*a76);
    a54=(a54+a54);
    a57=(a62/a57);
    a54=(a54*a57);
    a73=(a73+a54);
    a33=(a33+a33);
    a37=(a43/a37);
    a33=(a33*a37);
    a73=(a73+a33);
    a8=(a8/a0);
    a73=(a73+a8);
    a9=(a9/a0);
    a9=(a3*a9);
    a73=(a73+a9);
    a73=(-a73);
    if (res[1]!=0) res[1][6]=a73;
    a77=(a77+a77);
    a81=(a81/a80);
    a77=(a77*a81);
    a58=(a58+a58);
    a62=(a62/a61);
    a58=(a58*a62);
    a77=(a77+a58);
    a38=(a38+a38);
    a43=(a43/a42);
    a38=(a38*a43);
    a77=(a77+a38);
    a12=(a12/a0);
    a77=(a77+a12);
    a13=(a13/a0);
    a13=(a3*a13);
    a77=(a77+a13);
    a77=(-a77);
    if (res[1]!=0) res[1][7]=a77;
    a6=(a6+a6);
    a6=(a6*a3);
    a6=(-a6);
    if (res[1]!=0) res[1][8]=a6;
    a6=arg[1] ? arg[1][0] : 0;
    a3=(a1/a6);
    a3=(a3+a85);
    if (res[2]!=0) res[2][0]=a3;
    a3=arg[1] ? arg[1][1] : 0;
    a77=(a7/a3);
    a77=(a77+a85);
    if (res[2]!=0) res[2][1]=a77;
    a77=arg[1] ? arg[1][2] : 0;
    a13=(a11/a77);
    a13=(a13+a85);
    if (res[2]!=0) res[2][2]=a13;
    a20=(a1-a20);
    a13=sq(a20);
    a30=(a29+a30);
    a30=sq(a30);
    a13=(a13/a30);
    a32=(a7-a32);
    a85=sq(a32);
    a36=(a35+a36);
    a36=sq(a36);
    a85=(a85/a36);
    a13=(a13+a85);
    a34=(a11-a34);
    a85=sq(a34);
    a41=(a40+a41);
    a41=sq(a41);
    a85=(a85/a41);
    a13=(a13+a85);
    a13=sqrt(a13);
    a85=(a13-a10);
    a85=(a85+a87);
    if (res[2]!=0) res[2][3]=a85;
    a48=(a1-a48);
    a85=sq(a48);
    a51=(a29+a51);
    a51=sq(a51);
    a85=(a85/a51);
    a53=(a7-a53);
    a0=sq(a53);
    a56=(a35+a56);
    a56=sq(a56);
    a0=(a0/a56);
    a85=(a85+a0);
    a55=(a11-a55);
    a0=sq(a55);
    a60=(a40+a60);
    a60=sq(a60);
    a0=(a0/a60);
    a85=(a85+a0);
    a85=sqrt(a85);
    a0=(a85-a10);
    a0=(a0+a87);
    if (res[2]!=0) res[2][4]=a0;
    a67=(a1-a67);
    a0=sq(a67);
    a29=(a29+a70);
    a29=sq(a29);
    a0=(a0/a29);
    a72=(a7-a72);
    a70=sq(a72);
    a35=(a35+a75);
    a35=sq(a35);
    a70=(a70/a35);
    a0=(a0+a70);
    a74=(a11-a74);
    a70=sq(a74);
    a40=(a40+a79);
    a40=sq(a40);
    a70=(a70/a40);
    a0=(a0+a70);
    a0=sqrt(a0);
    a70=(a0-a10);
    a70=(a70+a87);
    if (res[2]!=0) res[2][5]=a70;
    if (res[3]!=0) res[3][0]=a10;
    if (res[3]!=0) res[3][1]=a10;
    if (res[3]!=0) res[3][2]=a10;
    if (res[3]!=0) res[3][3]=a10;
    if (res[3]!=0) res[3][4]=a10;
    if (res[3]!=0) res[3][5]=a10;
    a6=(1./a6);
    if (res[3]!=0) res[3][6]=a6;
    a20=(a20+a20);
    a20=(a20/a30);
    a13=(a13+a13);
    a20=(a20/a13);
    if (res[3]!=0) res[3][7]=a20;
    a48=(a48+a48);
    a48=(a48/a51);
    a85=(a85+a85);
    a48=(a48/a85);
    if (res[3]!=0) res[3][8]=a48;
    a67=(a67+a67);
    a67=(a67/a29);
    a0=(a0+a0);
    a67=(a67/a0);
    if (res[3]!=0) res[3][9]=a67;
    a3=(1./a3);
    if (res[3]!=0) res[3][10]=a3;
    a32=(a32+a32);
    a32=(a32/a36);
    a32=(a32/a13);
    if (res[3]!=0) res[3][11]=a32;
    a53=(a53+a53);
    a53=(a53/a56);
    a53=(a53/a85);
    if (res[3]!=0) res[3][12]=a53;
    a72=(a72+a72);
    a72=(a72/a35);
    a72=(a72/a0);
    if (res[3]!=0) res[3][13]=a72;
    a77=(1./a77);
    if (res[3]!=0) res[3][14]=a77;
    a34=(a34+a34);
    a34=(a34/a41);
    a34=(a34/a13);
    if (res[3]!=0) res[3][15]=a34;
    a55=(a55+a55);
    a55=(a55/a60);
    a55=(a55/a85);
    if (res[3]!=0) res[3][16]=a55;
    a74=(a74+a74);
    a74=(a74/a40);
    a74=(a74/a0);
    if (res[3]!=0) res[3][17]=a74;
    a74=arg[0] ? arg[0][13] : 0;
    a0=tan(a74);
    a40=9.8100000000000005e+00;
    a0=(a40*a0);
    a55=2.5000000000000000e-01;
    a85=arg[0] ? arg[0][9] : 0;
    a60=(a55*a85);
    a0=(a0-a60);
    a60=5.0000000000000003e-02;
    a34=(a60*a0);
    a34=(a85+a34);
    a13=(a85+a34);
    a41=2.5000000000000001e-02;
    a13=(a41*a13);
    a1=(a1+a13);
    if (res[4]!=0) res[4][0]=a1;
    a1=arg[0] ? arg[0][12] : 0;
    a13=tan(a1);
    a13=(a40*a13);
    a77=3.3000000000000002e-01;
    a72=arg[0] ? arg[0][10] : 0;
    a35=(a77*a72);
    a13=(a13+a35);
    a35=(a60*a13);
    a35=(a72-a35);
    a53=(a72+a35);
    a53=(a41*a53);
    a7=(a7+a53);
    if (res[4]!=0) res[4][1]=a7;
    a7=1.2270000000000001e+00;
    a53=(a7*a23);
    a56=arg[0] ? arg[0][11] : 0;
    a53=(a53-a56);
    a32=3.3670000000000000e-01;
    a53=(a53/a32);
    a36=(a60*a53);
    a36=(a56+a36);
    a3=(a56+a36);
    a3=(a41*a3);
    a11=(a11+a3);
    if (res[4]!=0) res[4][2]=a11;
    a11=1.1074999999999999e+00;
    a3=(a11*a21);
    a3=(a3-a74);
    a67=2.3180000000000001e-01;
    a3=(a3/a67);
    a29=(a60*a3);
    a29=(a74+a29);
    a48=tan(a29);
    a48=(a40*a48);
    a34=(a55*a34);
    a48=(a48-a34);
    a0=(a0+a48);
    a0=(a41*a0);
    a85=(a85+a0);
    if (res[4]!=0) res[4][3]=a85;
    a85=1.1259999999999999e+00;
    a0=(a85*a15);
    a0=(a0-a1);
    a48=2.3680000000000001e-01;
    a0=(a0/a48);
    a34=(a60*a0);
    a34=(a1+a34);
    a51=tan(a34);
    a51=(a40*a51);
    a35=(a77*a35);
    a51=(a51+a35);
    a13=(a13+a51);
    a13=(a41*a13);
    a72=(a72-a13);
    if (res[4]!=0) res[4][4]=a72;
    a7=(a7*a23);
    a7=(a7-a36);
    a7=(a7/a32);
    a53=(a53+a7);
    a53=(a41*a53);
    a56=(a56+a53);
    if (res[4]!=0) res[4][5]=a56;
    a85=(a85*a15);
    a85=(a85-a34);
    a85=(a85/a48);
    a0=(a0+a85);
    a0=(a41*a0);
    a0=(a1+a0);
    if (res[4]!=0) res[4][6]=a0;
    a11=(a11*a21);
    a11=(a11-a29);
    a11=(a11/a67);
    a3=(a3+a11);
    a3=(a41*a3);
    a3=(a74+a3);
    if (res[4]!=0) res[4][7]=a3;
    a3=arg[0] ? arg[0][3] : 0;
    a3=(a3+a3);
    a3=(a41*a3);
    a14=(a14+a3);
    if (res[4]!=0) res[4][8]=a14;
    a34=cos(a34);
    a34=sq(a34);
    a14=2.3775337837837834e-01;
    a14=(a14/a34);
    a14=(a40*a14);
    a14=(a41*a14);
    a14=(-a14);
    if (res[5]!=0) res[5][0]=a14;
    a14=2.1265272610025565e-01;
    if (res[5]!=0) res[5][1]=a14;
    a29=cos(a29);
    a29=sq(a29);
    a14=2.3889128559102676e-01;
    a14=(a14/a29);
    a14=(a40*a14);
    a14=(a41*a14);
    if (res[5]!=0) res[5][2]=a14;
    a14=2.1312647912089877e-01;
    if (res[5]!=0) res[5][3]=a14;
    a14=4.5552420552420559e-03;
    if (res[5]!=0) res[5][4]=a14;
    a14=1.6868059977653088e-01;
    if (res[5]!=0) res[5][5]=a14;
    if (res[5]!=0) res[5][6]=a60;
    if (res[5]!=0) res[5][7]=a10;
    if (res[5]!=0) res[5][8]=a10;
    if (res[5]!=0) res[5][9]=a10;
    a14=4.9687500000000002e-02;
    if (res[5]!=0) res[5][10]=a14;
    a14=9.8757812499999997e-01;
    if (res[5]!=0) res[5][11]=a14;
    a14=4.9587500000000007e-02;
    if (res[5]!=0) res[5][12]=a14;
    a14=9.8363612499999997e-01;
    if (res[5]!=0) res[5][13]=a14;
    a14=4.6287496287496288e-02;
    if (res[5]!=0) res[5][14]=a14;
    a14=8.6252599855213452e-01;
    if (res[5]!=0) res[5][15]=a14;
    a1=cos(a1);
    a1=sq(a1);
    a1=(a40/a1);
    a14=(a60*a1);
    a3=(a41*a14);
    a3=(-a3);
    if (res[5]!=0) res[5][16]=a3;
    a3=7.8885135135135132e-01;
    a3=(a3/a34);
    a3=(a40*a3);
    a77=(a77*a14);
    a3=(a3-a77);
    a1=(a1+a3);
    a1=(a41*a1);
    a1=(-a1);
    if (res[5]!=0) res[5][17]=a1;
    a1=8.1114322726442656e-01;
    if (res[5]!=0) res[5][18]=a1;
    a74=cos(a74);
    a74=sq(a74);
    a74=(a40/a74);
    a60=(a60*a74);
    a1=(a41*a60);
    if (res[5]!=0) res[5][19]=a1;
    a1=7.8429680759275233e-01;
    a1=(a1/a29);
    a40=(a40*a1);
    a55=(a55*a60);
    a40=(a40-a55);
    a74=(a74+a40);
    a41=(a41*a74);
    if (res[5]!=0) res[5][20]=a41;
    a41=8.0756074120009136e-01;
    if (res[5]!=0) res[5][21]=a41;
    if (res[5]!=0) res[5][22]=a10;
    return 0;
}

solver_int32_default FORCESNLPsolver_basic_3_20_50_1_model_1_init(solver_int32_default *f_type, solver_int32_default *n_in, solver_int32_default *n_out, solver_int32_default *sz_arg, solver_int32_default *sz_res) 
{
    *f_type = 1;
    *n_in = 2;
    *n_out = 6;
    *sz_arg = 2;
    *sz_res = 6;
    return 0;
}

solver_int32_default FORCESNLPsolver_basic_3_20_50_1_model_1_sparsity(solver_int32_default i, solver_int32_default *nrow, solver_int32_default *ncol, const solver_int32_default **colind, const solver_int32_default **row) 
{
    const solver_int32_default *s;
    switch (i) 
    {
      case 0:
        s = s0;
        break;
      case 1:
        s = s1;
        break;
      case 2:
        s = s2;
        break;
      case 3:
        s = s3;
        break;
      case 4:
        s = s4;
        break;
      case 5:
        s = s5;
        break;
      case 6:
        s = s6;
        break;
      case 7:
        s = s7;
        break;
      default:
        return 1;
    }
    
    *nrow = s[0];
    *ncol = s[1];
    *colind = s + 2;
    *row = s + 2 + (*ncol + 1);
    return 0;
}

solver_int32_default FORCESNLPsolver_basic_3_20_50_1_model_1_work(solver_int32_default *sz_iw, solver_int32_default *sz_w) 
{
    if (sz_iw) *sz_iw = 0;
    if (sz_w) *sz_w = 89;
    return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
