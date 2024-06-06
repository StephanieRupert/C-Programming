#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "scanner.h"

int
main(int argc,char **argv)
    {
    int x;
    double y;
    
    printf("Enter an integer: ");
    x = readInt(stdin);
    printf("The next higher number is %d\n",x + 1);
    
    printf("Enter a realNumber: ");
    y = readReal(stdin);
    printf("The next higher number is %f\n",y + 1);
    
    return 0;
    }
