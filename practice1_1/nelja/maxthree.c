#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int
max2(int x,int y)
    {
    if (x > y)
        return x;
    else
        return y;
    }    

int
max3(int x,int y,int z)
    {
    int maximum1,maximum2;
    
    maximum1 = max2(x,y);
    maximum2 = max2(y,z);
    
    return max2(maximum1,maximum2);
    }

int 
main(int argc,char **argv)
    {
    int x,y,z;

    printf("Give me an integer: ");
    scanf("%d",&x);
    printf("Another: ");
    scanf("%d",&y);
    printf("Another: ");
    scanf("%d",&z);

    printf("max2 computes that the max of the first two numbers is %d\n",max2(x,y));
    
    printf("max3 computes that the max of all three numbers is %d\n",max3(x,y,z)); 
    
    return 0;
    }
