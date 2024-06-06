#include <stdio.h>

int main(int argc,char *argv[])
    {
    printf("Hello, world\n");
    
    int x;
    printf("Enter an integer: ");
    scanf("%d",&x);
    
    double y;
    printf("Enter an double: ");
    scanf("%lf",&y);
    
    printf("You entered %d and %lf\n",x,y);
    
    int z;
    scanf("%d",&z);
    printf("Should be nothing? %d\n",z);
    }
