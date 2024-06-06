#include <stdio.h>
#include "line.h"


int
main(int argc,char **argv)
    {
    double x,y;

    printf("Enter an x value: ");
    scanf("%lf",&x);
    y = computeY(x);
    printf("y is %f\n",y);
    return 0;
    }
