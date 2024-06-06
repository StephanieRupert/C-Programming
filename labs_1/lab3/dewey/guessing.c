#include <stdio.h>
#include <stdlib.h>


int
guess(int n)
    {
    if (n == -1)
        return -1;
    else if (n == 0)
        return 0;
    else if (n == 1) 
        return 1;
    else
        exit(1);
    }

int
main(int argc,char **argv)
    {
    int n;
    printf("Is the number less than, equal to, or greater than 8 (-1/0/1): "); 
    scanf("%d",&n);
    
    if (guess(n) == -1)
        {
        printf("Is the number less than, equal to, or greater than 4 (-1/0/1) ");
        scanf("%d",&n);
        
        if (n == -1)
            {
            printf("Is the number less than, equal to, or greater than 2 (-1/0/1) ");
            scanf("%d",&n);
                if (n == -1)
                    printf("Your number is 1");
                else if (n == 0)
                    printf("Your number is 2");
                else if (n == 1)
                    printf("Your number is 3");
                else
                    exit(1);
            }        
        else if (n == 0)
            printf("Your number is 4");
        
        else if (n == 1)
            {
            printf("Is the number less than, equal to, or greater than 6 (-1/0/1) ");
            scanf("%d",&n);
                if (n == -1)
                    printf("Your number is 5");
                else if (n == 0)
                    printf("Your number is 6");
                else if (n == 1)
                    printf("Your number is 7");
                else
                    exit(1);
            }
        }

    else if (guess(n) == 0)
        printf("Your number is 8");

    else if (guess(n) == 1)
        {
        printf("Is the number less than, equal to, or greater than 12 (-1/0/1) ");
        scanf("%d",&n);
            if (n == -1)
                {
                printf("Is the number less than, equal to, or greater than 10 (-1/0/1) ");
                scanf("%d",&n);
                    if (n == -1)
                        printf("Your number is 9");
                    else if (n == 0)
                        printf("Your number is 10");
                    else if (n == 1)
                        printf("Your number is 11");
                    else
                        exit(1);
                }

            else if (n == 0)
                printf("Your number is 12");
            
            else if (n == 1)
                {
                printf("Is the number less than, equal to, or greater than 14 (-1/0/1) ");
                scanf("%d",&n);
                    if (n == -1)
                        printf("Your number is 13");
                    else if (n == 0)
                        printf("Your number is 14");
                    else if (n == 1)
                        printf("Your number is 15");
                    else
                        exit(1);
                }       
        }
    
    return 0;
    }
