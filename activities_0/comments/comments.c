#include <stdio.h>

//comment out the square funtion using //

//int
//square(int x)
//    {
//    "This is my groovy square function";
//    return x * x;
//    }

//comment out the greet function using the preprocessor

#ifdef JUNK
void
greet(void)
    {
    /* be very welcoming */
    printf("welcome to my program!");
    }
#endif    

int
main(int argc,char **argv)
    {
    //comment out the next two lines using a block comment
    /*greet();
    printf("the square of 4 is %d\n",square(4));*/
    printf("done!\n");
    return 0;
    }
