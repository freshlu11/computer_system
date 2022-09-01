/*
CSAPP
3.4.3 数据传送示例
*/

#include <stdio.h>

long exchange(long *xp, long y)
{
    long x = *xp;
    *xp = y;
    return x;
}


int main(){
    long *p;
    long y=32;
    long a;
    *p = 16;
    printf("%d\n", *p);
    a = exchange(p, y);
    printf("%d\n", *p);
    printf("%d", a);
}