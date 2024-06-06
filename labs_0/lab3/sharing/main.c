#include <stdio.h>
#include "max.h"

int
main(void)
    {
    int a,b,c;
    int x,y,z;
    int maximum1,maximum2;

    printf("Enter 6 numbers separated by a space: ");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&x,&y,&z);
    
    maximum1 = max3(a,b,c);
    maximum2 = max3(x,y,z);

    printf("The maximum is %d\n",max2(maximum1,maximum2));

    return 0;
    }


