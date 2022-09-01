/*
CSAPP
3.5练习题
*/


void decode1(long *xp, long *yp, long *zp){
    // xp in %rdi, yp in %rsi, zp in %rdx
    long a=*xp;  // %r8
    long b=*yp;  // %rcx
    long x=*zp;  // %rax

    *yp = a;
    *zp = b;
    *xp = x;

    return x;
}
