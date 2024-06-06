#include <stdio.h>

int
main(int argc,char **argv)
    {
    char *s;
    int x;
    double r;
    
    s = "Welcome to CS100!";
    x = 4;
    r = 3.141592653;
    printf("a string is %%s: %s\n",s);
    printf("an integer is %%d: %d\n",x);
    printf("a double is %%f: %f\n",r);
    
    /* Remove char, int, double above for these below to work
    printf("a string is %%s: %s\n", "Welcome to CS100!");
    printf("an integer is %%d: %d\n",4);
    printf("an double is %%f: %f\n",3.141592653);
    printf("a character is %%c: %c\n",'x');
    printf("a character (as an integer) is %%d: %d\n",'x');
    */
    
    return 0;
    }
