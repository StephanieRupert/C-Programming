#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int
infact(int a,int n)
    {
    if (n == 1)
        return a;
    else
        return infact(a * n,n - 1);
    }

int 
factorial2(int n)
    {
    return infact(1,n);
    }

int
prod(int m,int n,int f)
    {
    if (m == n)
        return m;
    else
        return m * (prod(m + 1,n,f));
    }

int
id(int w)
    {
    return w;
    }

int
sqr(int x)
    {
    return x * x;
    }

int
down(int a,int b,int c,int d)
    {
    if (a < 1)
        return d;
    else if (c <= a)
        return down(a-c,b/2,c/2,d+b);
    else
        return down(a,b/2,c/2,d);
    }    

int
up(int a,int b,int c)
    {
    if (c < a)
        return up(a,2*b,2*c);
    else
        return down(a,b,c,0);
    }    

int
emult(int a,int b)
    {
    return up(a,b,1);
    }

int 
main(int argc,char **argv)
    {
    int n;

    printf("Give me an integer: ");
    scanf("%d",&n);
    printf("The result of factorial2 is: %d\n",factorial2(n));
   
    printf("prod(1,5,id) is %d (should be 120)\n",prod(1,5,id));
    printf("prod(1,5,sqr) is %d (should be 14400)\n",prod(1,5,sqr));

    printf("The result of emult is %d (should be 10)\n",emult(2,5));

    
    return 0;
    }
