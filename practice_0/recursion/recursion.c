#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int
fact(int n)
    {
    if (n == 0)
        return 1;
    else
        return n * fact(n-1);           //it works because magic
    }


int 
main(int argc,char **argv)
    {
    int n;
    printf("n? ");
    scanf("%d",&n);
    printf("%d\n",fact(n));
    return 0;
    }
