#include <stdio.h>

int
main(int argc, char **argv)
    {
    int a;
    int b;
    char *s;
    double x;
    int c;
    double y;
    
    a = 12;
    b = 23;
    s = "Hello ";
    x = 15.0;
    c = a + b;
    y = c - x;
    a = a + b + x + y;

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%s\n",s);
    printf("%0.1f\n",x);
    printf("%d\n",c);
    printf("%0.1f\n",y);
    
    return 0;
    }
