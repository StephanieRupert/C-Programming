#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int
b(int n,int k)
    {
    if (n < k || k < 0)
        return 0;
    else if (n == k || k == 0)
        return 1;
    else
        return b(n-1,k-1) + b(n-1,k);
    }    

int
main(int argc,char **argv)
    {
    int n,k;

    printf("Give me n: ");
    scanf("%d",&n);
    printf("Give me k: ");
    scanf("%d",&k);

    printf("%d choose %d is %d",n,k,b(n,k));

    return 0;
    }
