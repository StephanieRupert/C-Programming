#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//function definition
// return type, like int, char, double, char *, ...
// function name (main here) which looks like a variable name - a function name is a constant so it can't be changed later in the code
// open paren
// a comma seperated list of formal parameters
//      a formal parameter is a variable and it has a type
// close paren
// block
//      starts with an open brace
//      a sequence of statements (steps to take)
//      ends with a close brace


//int square(int x); <-- Called function signature or prototype or function declaration - you don't have to do this if you put the square function above main


int square(int x)
    {
    return x * x;
    }

void swap(int *x,int *y) //Professor just had int *,int * but that wouldn't work for me
    {
    int temp;
    temp = *x;  //go to the address in x and get me the value to store in temp
    *x = *y;
    *y = temp;
    printf("In swap: the value at address x is %d\n",*x);
    printf("In swap: the value at address y is %d\n",*y);
    return;
    }

int main(int argc,char **argv)
    {
    int z = 4,a = 13;
    
    swap(&z,&a);

    printf("The value of z is %d!\n",z);
    printf("The value of a is %d!\n",a);

    //this is a function call
    //  no return type, must be a call
    //  name of the function we want to call
    //  open paren
    //  comma seperated list of arguments
    //  close paren
    // main(argc+1,0);

    return 0;
    }
