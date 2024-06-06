#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int
main(int argc,char **argv)
    {
    //Print the numbers from 1 to 50 by three
    
    /*int i = 0;
    while (i <= 50)
        {
        printf("%d\n",i);
        i = i + 3;
        }*/

    //Print the numbers from 100 to 0 by -5

    /*int i = 100;
    while (i >= 0)
        {
        printf("%d\n",i);
        i = i - 5;
        }*/

    //Read in a value n and print the sum of the first n numbers

    /*int n;
    int count;
    int sum = 0;
    printf("Enter an integer: ");
    scanf("%d",&n);
    count = 1;
    while (count <= n)
        {
        sum = sum + count;
        ++count;
        }
    printf("The sum is %d",sum);*/
    
    //Read in 10 values and print their average

    /*int n = 0;
    int count;
    double sum;
    while (count < 10)
        {
        printf("Enter a number: ");
        scanf("%d",&n);
        sum = sum + n;
        ++count;
        }
    printf("The average is %lf",sum/10);*/

    //Read in 10 values and print the largest and smallest values

    /*int i = 0;
    int min,max;
    int items[10];
    printf("Enter 10 values\n");
    for(i = 0; i < 10; i++)
        {
        printf("Enter a number: ");
        scanf("%d",&items[i]);
        }
    min = items[0];
    max = items[0];
    for(i = 1; i < 10; i++)
        {
        if (min > items[i])
            min = items[i];
        else if (max < items[i])
            max = items[i];
        else
            return 0;
        }
    printf("The largest value is: %d\n",max);
    printf("The smallest value is: %d\n",min);*/

    //Read in numbers until you enter a -1 and print the average of these numbers
            
    /*int n = 0;
    int count;
    double sum;
    while (n != -1)
        {
        printf("Enter a number: ");
        scanf("%d",&n);
        sum = sum + n;
        ++count;
        }
    printf("The average is %lf",sum/count);*/

    //Read in numbers until you enter a -1 and print the largest and smallest values that you read

    
    
    return 0;
    }
