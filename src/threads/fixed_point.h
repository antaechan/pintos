#define F   (1<<14) // fixed point value
/* 17.14 fixed-point format */
int int_to_fp(int n);
int fp_to_int(int x);
int add_fp(int x, int y);
int sub_fp(int x, int y);
int add_fp_int(int x, int n);
int sub_fp_int(int x, int n);
int mul_fp(int x, int y);
int mul_fp_int(int x, int n);
int div_fp(int x, int y);
int div_fp_by_int(int x, int n);
