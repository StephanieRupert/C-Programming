#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc,char **argv)
    {
    int i;

    /*i = 0;
    while (i < 50)
        {
        printf("%d\n",i);
        i += 5;
        }*/
    
    /*for (i = 0; i < 50; i = i + 5)  //or i+=5
        printf("%d\n",i);*/
    
    /*for (i = 100; i > 0; i += -5)
        printf("%d\n",i);*/
     
    /*for (i = 200; i < 300; i += 20)
        printf("%d\n",i);*/

    int n;
    int sum = 0;

    printf("n? ");
    scanf("%d",&n);
    
    for (i = 1; i <= n; i += 1)
        sum = sum + i;

    printf("The sum is %d\n",sum);
    
    return 0;
    }
