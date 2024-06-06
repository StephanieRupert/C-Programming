#include <stdio.h>

int square(int);    //function signatures are at the top

int
main(int argc,char **argv)
    {
    printf("%d\n",square(2));   // 2 is an argument
    printf("%d\n",square(5));   // 5 is an argument
    printf("%d\n",square(100)); // 100 is an arugment
    return 0;
    }

int
square(int number)      //this line is the function signature for square
    {
    int sqr = number * number;
    return sqr;
    }

//"int length(char *name,int start,double finish):" means it's a function named length and will take a string, an integer, and a double argument and it will return an integer. The variables *name, start, and finish are formal parameters.
