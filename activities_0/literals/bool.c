#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int odd(int);
int even(int);

int
main(int argc,char **argv)
    {
    printf("Test 1: trying odd(3) AND even(2)...\n");
    printf("%d\n",odd(3) && even(2));
    printf("Test 2: trying odd(3) OR even(2)...\n");
    printf("%d\n",odd(3) || even(2));
    printf("Test 3: trying odd(4) AND even(7)...\n");
    printf("%d\n",odd(4) && even(7));
    printf("Test 4: trying odd(4) OR even(7)...\n");
    printf("%d\n",odd(4) || even(7));
    return 0;
    }

int
odd(int n)
    {
    printf("in odd!\n");
    return n % 2 == 1;
    }

int
even(int r)
    {
    printf("in even!\n");
    return r % 2 == 0;
    }
