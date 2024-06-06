#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int marshmallowsPerBag = 40;
double gramsPerMarshmallow = 7.2;

double getWeight()
    {
    double w;
    printf("What is your weight in lbs? ");
    scanf("%lf",&w);
    return w;
    }

int main(int argc,char **argv)
    {
    double yourWeight;
    double gramsPerLb = 453.6;
    int marshCount;
    yourWeight = getWeight();
    printf("Your weight in lbs is %.1f\n",yourWeight);
    marshCount = yourWeight * gramsPerLb / gramsPerMarshmallow; 
    printf("Your weight in marshmallows is %d marshmallows\n",marshCount);
    printf("That's %d bags of marshmallows\n",marshCount / marshmallowsPerBag);
    return 0;
    }
