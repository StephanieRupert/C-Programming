
#include <stdio.h>

#include "lib1.h"
#include "lib3.h"

int main( int argc , char *argv[] )
    {
    printf( "Calling a function from lib1\n" );
    printf( "Given 5 the function returned %d\n" , lib1_function(5) );

    printf( "Calling a function from lib3\n" );
    printf( "Given 5 the function returned %d\n" , lib3_function(5) );

    return 0;
    }
