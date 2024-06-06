#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int
main(int argc,char **argv)
    {
    int miles = 160;

    int feetInMiles = 5280;

    int inchesInMiles = (feetInMiles * miles) * 12;

    double twizzlerNum = inchesInMiles / 8; 

    double packages = twizzlerNum / 40;

    printf("It would take %lf packages of 40 count Twizzlers to run from Tuscaloosa to Auburn",packages);
    return 0;
    }
