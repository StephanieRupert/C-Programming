#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int
mphIps()
    {
    int milesPerHour = 50;
    int inchesInMile = 63360;
    int secInHour = 3600;
    int result;
    result = ((milesPerHour * inchesInMile) / secInHour);
    printf("50 mph to inches per second is %d\n",result);
    
    return 0;
    }

double
poundsGrams()
    {
    int pounds = 150;
    double gramsInPound = 453.59237;
    double result;
    result = pounds * gramsInPound;
    printf("150 pounds to grams is %lf\n",result);

    return 0;
    }

double
yardsAngstroms()
    {
    int yards = 100;
    double angstromsInYard = 9.144e9;
    double result;
    result = yards * angstromsInYard;
    printf("100 yards in angstroms is %lf\n",result);

    return 0;
    }

double
lightYearsInches()
    {
    int lightYears = 5;
    double inchesInLightYear = 3.72461748e17;
    double result;
    result = lightYears * inchesInLightYear;
    printf("5 light years in inches is %lf\n",result);

    return 0;
    }


int
main(int argc,char **argv)
    {
    mphIps();
    poundsGrams();
    yardsAngstroms();
    lightYearsInches();

    return 0;
    }
