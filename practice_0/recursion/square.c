#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int
sqr(int x)
    {
    if (x == 0)
        return 1;
    else
        return sqr(x-1) + (x-1) + (x+1);
    }    


int main(int argc,char **argv)
    {
    int x;
    
    printf("Give me an integer: ");
    scanf("%d",&x);
    printf("The square result is %d\n",sqr(x));

    
    return 0;
    }
