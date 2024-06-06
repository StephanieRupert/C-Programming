
#include <stdio.h>
#include <stdlib.h>

#include "task1.h"

int main(int argc, char* argv[]) {

    if( argc != 3 ) {
        printf( "usage: %s a r\n" , argv[0] );
        return -1;
    }
    
    double a = atof(argv[1]);
    double r = atof(argv[2]);

    double result = geometricSeries( a , r );

    printf( "a = %0.3lf\n" , a );
    printf( "r = %0.3lf\n" , r );
    printf( "Sum of first 6 terms is %0.3lf\n" , result );

    return 0;
}
