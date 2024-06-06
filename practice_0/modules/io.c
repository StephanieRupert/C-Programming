#include <stdio.h>
#include "io.h"

void
getData(int *a,int *b,int *c)
    {
    printf("An integer, please: ");
    scanf("%d",a);
    printf("Another integer, please: ");
    scanf("%d",b);
    printf("Another integer, please: ");
    scanf("%d",c);
    return;
    }

void
display(int x)
    {
    printf("The result is %d\n",x);
    return;
    }
