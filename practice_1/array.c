#include <stdio.h>

int
main(int argc,char **argv)
    {
    int array[10] = {3,1,4,1,5,9,2,6,5,3};
    printf("%d\n",array[0]);
    printf("%d\n",array[5]);
    printf("%d\n",array[9]);

    int x[3]= {0,1,2};
    int *p1,*p2;
    p1 =  x;
    p2 = x + 2;
    printf("%d and %d and %d\n",x[0],x[1],x[2]);
    printf("%p and %p\n",x,p1);
    printf("%d and %p and %p\n",*p1,p1,&x[0]);
    printf("%d and %p and %p\n",*p2,p2,&x[2]);
    
    return 0;
    }
