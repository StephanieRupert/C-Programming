#include <stdio.h>

int
main(int argc,char **argv)
    {
    int dimensions = 2640;      //22 x 10 x 12, cubic feet in classroom
    int ounces = 12;
    double convert = 0.00104;
    printf("%lf cans will fit in this room.",(dimensions/convert)/ounces);

    return 0;
    }
