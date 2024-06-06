#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int
main(int argc,char **argv)
    {
    char name[512];
    char answer;

    printf("What is your name? ");
    scanf("%s",name); //dangerous code
    printf("Hello, %s\n",name);
    printf("Do you find CS100 intellectually stimulating? ");
    scanf(" %c",&answer);
    if (answer == 'Y' || answer == 'y')
        {
        printf("Great!\n");
        }
    else
        {
        printf("You will!\n");
        }
    return 0;
    }
