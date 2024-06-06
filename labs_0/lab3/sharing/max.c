#include <stdio.h>

int
max3(int a,int b,int c)
    {
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
    }

int
max2(int a,int b)
    {
    if (a > b)
        return a;
    else
        return b;
    }    
