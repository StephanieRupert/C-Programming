#include <stdio.h>


int 
areSame(char a,char b,char c)
    {
    if (a == b && a == c)
        return a;
    
    else if (b == a && b == c)
        return b;

    else
        return c;
    }

int
isTriangle(double A,double B,double C)
    {
    if (A < (B + C))
        return 1;
    
    else if (B < (A + C))
        return 1;
    
    else if (C < (A + B))
        return 1;

    else
        return 0;
    }

int
main(int argc,char **argv)
    {
    double A,B,C;
    
    printf("Enter the three triangle sides: ");
    scanf("%lf %lf %lf",&A,&B,&C);
    printf("You entered %lf %lf and %lf",A,B,C);

    isTriangle(A,B,C);

    return x;
    }
