#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int
fib1(int n)
    {
    int i = 0;
    int prev = 0;
    int curr = 1;
    
    while (i < n)
        {
        int temp = prev;
        prev = curr;
        curr = prev + temp;
        ++i;
        }
    
    return prev;
    }

int
fib2(int n)
    {
    if (n == 0)
        return 0;
    
    else if (n == 1)
        return 1;

    else
        return fib2(n-1) + fib2(n-2);
    }

int
main(int argc,char **argv)
    {
    int n = 5;
    
    printf("fib1(%d) is %d\n",n,fib1(n));
    printf("fib2(%d) is %d\n",n,fib2(n));

    return 0;
    }
