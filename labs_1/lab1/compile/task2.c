
#include "task2.h"


/* Helper function, don't worry about it */
int sum( int* numbers , int how_many ) {
    int result = 0;
    for( int i = 0 ; i < how_many ; ++i ) {
        result += numbers[i];
    }
    return result;
}

/* There are two errors here, find them and fix them */
int calculateAverage( int* numbers, int how_many ) {
    
    int result = sum( numbers , how_many );

    return result / how_many;
}
