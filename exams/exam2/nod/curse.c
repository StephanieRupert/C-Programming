#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int
h(int t,int a,int b)
    {
    if (b == 0)
        return t;
    else if (b % 2 == 0)
        return h(t,2 * a,b / 2);
    else
        return h(t + a,a,b - 1);
    }

int
m(int a,int b)
    {
    return h(0,a,b);
    }

int
ilog(int a,int b)
    {
    if (a < b)
        return 0;
    else 
        return 1 + ilog(0,a/b);
    }

int
main(int argc,char **argv)
    {
    int a,b;
    
    printf("First integer: ");
    scanf("%d",&a);
    printf("Second integer: ");
    scanf("%d",&b);
    
    printf("The mystery function returns %d\n",m(a,b));
    printf("The mystery function performs ???\n");
    printf("The integer log of %d base %d is %d",a,b,ilog(a,b));
    return 0;
    }
