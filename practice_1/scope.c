//10, 40, 10

#include <stdio.h>

int a = 5;

int
main(int argc,char **argv)
    {
    int a = 10;
    printf("%d\n",a);
    
    if (a > 10)
        {
        int a = 20;
        printf("%d\n",a);
        }
    
    else
        {
        int a = 40;
        printf("%d\n",a);
        }

    printf("%d\n",a);

    return 0;
    }
