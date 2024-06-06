#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
roll()
    {
    int i,n;
    time_t t;

    n = 1;

    srand((unsigned) time(&t));

    for (i = 0; i < n; i++)
        {
        printf("You rolled %d\n",rand() % 10);
        }

    return 0;
    }


int
main(void)
    {
    int input;
    roll();
    printf("Would you like to roll again? ( 0 for no, 1 for yes ) ");
    scanf("%d",&input);
    
    if (input == 1)
       return roll();
    else
        exit(1);

    }    
