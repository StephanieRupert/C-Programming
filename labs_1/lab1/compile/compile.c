
#include <stdio.h>

#include "task2.h"

int main(void) {
    int numbers[100];
    int how_many;

    printf( "How many numbers do you want to insert? ");
    scanf( " %d" , &how_many );

    for( int i = 0 ; i < how_many; ++i ) {
        printf( "Please enter an integer: " );
        scanf( " %d" , numbers + i );
    }

    int average = calculateAverage( numbers , how_many );

    printf( "The average is %d\n" , average );

    return 0;
}
