#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int
main(int argc,char **argv)
    {
    int seconds;
    double g,velocity,feet;
    
    g = 32.174;

    printf("Enter the drop time (in seconds): ");
    scanf("%d",&seconds);
    printf("The book falls for %d seconds\n",seconds);

    velocity = g * seconds; //assuming no air resistance

    feet = seconds * seconds * g / 2.0;
    
    printf("The velocity at impact is %lf ft/s\n",velocity);
    
    printf("The drop height is %lf feet\n",feet);
    
    return 0;
    }
