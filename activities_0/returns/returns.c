#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int a = 1,b = 2,c = 3,d = 4;
int w, x, y, z;

int
i(int b,int c,int d)
    {
    return (a * 2);
    }

int
h(int a,int b,int c,int d,int w)
    {
    return a + i(b,c,d);
    }

int
g(int b,int c,int d,int x)
    {
    return (b + c + d + d);
    }

int
f(int a,int y)
    {
    return a + g(b,c,d);
    }

int
main(int argc,char **argv)
    {
    w = i(b,c,d);
    x = h(a,b,c,d,w);
    y = g(b,c,d,x);
    z = f(a,y);
    printf("The result is %d\n",z);
    return 0;
    }
