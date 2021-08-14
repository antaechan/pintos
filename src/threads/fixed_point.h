/* kernel don't supply floating point arithemtic
   calculation. use fixed-point format    
          */
#define F   (1<<14) // fixed point value

/* 17.14 fixed-point format */
int int_to_fp(int n){
    return n*F;
}

int fp_to_int(int x){
    if(x >= 0) return (x + F/2)/F;
    else return (x - F/2)/F;
}

int add_fp(int x, int y){
    return x + y;
}

int sub_fp(int x, int y){
    return x - y;
}

int add_fp_int(int x, int n){
    return x + n*F;
}

int sub_fp_int(int x, int n){
    return x - n*F;
}

int mul_fp(int x, int y){
    return ((int64_t)x)*y/F;
}

int mul_fp_int(int x, int n){
    return x*n;
}

int div_fp(int x, int y){
    return ((int64_t)x)*F/y;
}

int div_fp_by_int(int x, int n){
    return x/n;
}