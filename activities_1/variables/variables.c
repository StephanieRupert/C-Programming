#include <stdio.h>


int square(int);     //function signatures are at the top

int
main(int argc,char **argv)
    {
    printf("%d\n",square(2));      // 2 is an argument
    printf("%d\n",square(5));      // 5 is an argument
    printf("%d\n",square(100));    // 100 is an argument
    return 0;
    }

int
square(int number)        //this line is the function signature for square
    {
    int sqr = number * number;
    return sqr;
    }

//The length function returns an integer and takes in a string variable named
//name, an integer variable named start, and a double variable named finish.
