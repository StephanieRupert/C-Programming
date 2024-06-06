#include <stdio.h>


int
helper(int n,int r)
    {
    if (n < 10)
        return r * 10 + n;
    else
        return helper(n/10,n%10+r*10);
    }    

int
reverse(int n)
    {
    return helper(n,0);
    }

int
main(int argc,char **argv)
    {
    int num;
    int rev = 0;
    
    printf("Give me the integer: ");
    scanf("%d",&num);
    
    printf("The reversal of the digits is %d.",helper(num,rev));
    return 0;
    }
