#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int a=1,b=2,c=3,d=4;

int
f(int a,int b,int c,int d)
    {
    return a + g(b,c,d);
    }

int
g(int b,int c,int d)
    {
    return b + c + d + d;
    }

int
h(int a,int b,int c,int d)
    {
    return a + i(b,c,d);
    }

int
i(int a)
    {
    return (a * 2);
    }

int
main(int argc,char **argv)
    {
    int result = f(a,b,c,d);
    printf("The result is %d",result);
    return 0;
    }
