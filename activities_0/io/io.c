#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "scanner.h"

int
main(int argc,char **argv)
    {
    char *x;
    printf("Enter your name: ");
    x = readToken(stdin);
    printf("Hello, %s!\n",x);
    return 0;
    }
