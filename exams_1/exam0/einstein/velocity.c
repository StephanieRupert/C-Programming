#include <stdio.h>

int
main(void)
    {
    int current,acc,time,final;

    printf("Enter the car's current velocity: ");
    scanf("%d",&current);

    printf("Enter the car's acceleration: ");
    scanf("%d",&acc);

    printf("Enter how long to accelerate: ");
    scanf("%d",&time);

    final = current + (acc * time);

    printf("The car's final velocity is: %d",final); 

    return 0;
    }
