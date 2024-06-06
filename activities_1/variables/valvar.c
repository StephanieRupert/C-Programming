#include <stdio.h>

int
main(int argc,char **argv)
    {
    double x = 12;
    int y = 23;
    char *a = "Hello";
    double z = 15.0;

    int add = x + y;
    double sub = add - z; 

    x = x + y + z + sub;
    
    printf("%.1f\n",x);
    printf("%d\n",y);
    printf("%s\n",a);
    printf("%.1f\n",z);
    printf("%d\n",add);
    printf("%.1f\n",sub);
    
    return 0;
    }
