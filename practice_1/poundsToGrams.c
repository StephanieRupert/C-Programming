#include <stdio.h>

int
main(void)
    {
    int pounds = 150;
    double kilograms = 2.2;
    int grams = 1000;

    printf("150 pounds to grams is %lf\n",pounds/kilograms * grams);
    
    int kph = 90;
    double inches = 39370.1;
    int seconds = 3600;

    printf("90 kph to inches per second is %lf\n", (kph * inches)/seconds);

    return 0;
    }
