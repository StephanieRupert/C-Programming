#include <stdio.h>


int 
main(int argc,char **argv)
    {
    int weight,ounces,pennies;
    double grams;
    
    printf("Calculating how many pennies you weigh.\n");
    printf("What is your weight in pounds? ");
    scanf("%d",&weight);
    
    ounces = weight * 16;
    grams = ounces * 28.35;
    pennies = grams / 2.5; 

    printf("\n\t Your weight in pennies is the same as %d pennies.\n",pennies);
    
    return 0;
    }
