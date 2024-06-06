
#include <stdio.h>

#include "task3.h"

double readDouble(const char* str) {
    double d;
    printf( "%s", str );
    scanf( " %lf" , &d );
    return d;
}

int main(void) {

    double numer_1 = readDouble( "What is the numerator of the first number? " );
    double denom_1 = readDouble( "What is the denominator of the first number? " );

    double numer_2 = readDouble( "What is the numerator of the second number? " );
    double denom_2 = readDouble( "What is the denominator of the second number? " );


    printf( "The resulting sum is %0.3lf\n" , addFractions( numer_1 , denom_1 , numer_2 , denom_2 ) );

    return 0;
}
