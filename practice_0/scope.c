#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int y = 8;

int fact(int x)
    {
    if (x == 0)
        return 1;
    else
        {
        int result = fact(x - 1);
        return x * result;
        }
    printf("X is %d",x); //unreachable, but legal code    
    }    


int
main(int argc,char **argv)
    {
    
    int n;
    printf("n? ");
    scanf("%d",&n);
    printf("Result is %d\n",fact(n));
    //printf("x is %d\n",x); x is not visible in main, only visible in fact 
    printf("y is %d\n",y);
    
    return 0;
    }

