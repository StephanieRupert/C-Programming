#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int
main(int argc,char **argv)
    {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if (((a % 3 == 0) && (a % 5 == 0)) || ((b % 3 == 0) && (b % 5 == 0)))
        printf("fizzbuzz");
    else if ((a % 3 == 0) || (b % 3 == 0))
        printf("fizz");
    else if ((a % 5 == 0) || (b % 5 == 0))
        printf("buzz");
    else
        {
        printf("%d ",a);
        printf("%d",b);
        }

    return 0;
    }
