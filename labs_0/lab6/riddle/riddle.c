#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int
riddle(int n,int c)
    {
    while (n > 1)
        {
        if (n == 1)
            {
            return 0;
            }

        else if (n % 2 == 0)
            {
            n = n / 2;
            ++c;
            return riddle(n,c);
            }
    
        else
            {
            n = n * 3 + 1;
            ++c;
            return riddle(n,c);
            }
        }
    } 

int
main(int argc,char **argv)
    {
    int n;
    int c = 0;

    printf("Enter a value for n: ");
    scanf("%d",&n);
    printf("The number %d takes %d iterations to reach 1",n,riddle(n,c));
    return 0;
    }
