#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
    double a[] = { 5, 9, 8 };
    double b;
    printf("give me a value for b: ");
    scanf("%lf",&b);                    //would be %d if int instead of double
    printf("the value of b is %lf\n",b);
    printf("the old value of a[0] is %lf\n",a[0]);
    printf("give me a new value for a[0]: ");
    scanf("%lf",a);
    printf("the value of a[0] is %lf\n",a[0]);
    return 0;
    }
