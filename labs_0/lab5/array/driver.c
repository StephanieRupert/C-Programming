
//
//  Author: Jeffrey A. Robinson
//
//  Description:
//
//      Driver to test the array object
//
//


#define false 0
#define true 1

// printf
#include <stdio.h>
// strcmp
#include <string.h>

// Array 
#include "array.h"

// How many elements can the array hold
const int NumElements = 100;


char *toString( int i)
{
    char *buff = malloc( 16 );
    sprintf( buff , "%d" , i );
    return buff;
}

//
//  Assertion function
//
//  If the test is false then we print the message and exit
//
int Assert( const char* msg , int test , int terminate ) {
    if( !test ) {
        printf( "%s\n" , msg );
        if( terminate )
        {
            exit( -1 );
        }
    }
    return test;
}


int test_create( Array **arr )
    {
    // Create the array
    *arr = createArray( NumElements );
    Assert( "There was an error creating the array" , *arr != NULL , true );
    return arr == NULL;
    }

int test_length( Array* arr)
    {
    Assert( "The length should was incorrect" , NumElements == getLength( arr ) , false );
    return NumElements != getLength( arr );
    }

int test_put( Array* arr) {
    // Set valid positions
    int i,error = 0;
    for( i = 0 ; i < NumElements ; ++i ) 
        {
        setValue( arr , i , toString( i * i ) , &error );

        if( !Assert( "There was an issue with set" , error == 0 , false ) )
            {
            return error;
            }
        if( !Assert( "The length should was incorrect" , NumElements == getLength( arr ) , false ) )
            {
            return -1;
            }

        }
    return error;
}

int test_get( Array* arr)
    {
    // Check valid gets
    char buffer[16];
    int i,error = 0;
    for( i = 0 ; i < NumElements ; ++i ) 
        {
        char* val = getValue( arr , i , &error );

        if( !Assert( "There was an issue in get" , error == 0 , false ) )
            {
            return error;
            }

        sprintf( buffer , "%d" , i * i );
        if( !Assert( "There was an issue with in get" , strcmp( buffer , val) == 0 , false ) )
            {
            return error;
            }

        if( !Assert( "The length should was incorrect" , NumElements == getLength( arr ) , false ) )
            {
            return -1;
            }

        /* If this fails something really went wrong */
        free( val );

        }
    return error;
    }

int test_out_bounds( Array *arr )
    {
    int e1 = 0,e2 = 0;
    setValue( arr , NumElements , NULL , &e1 );
    Assert( "The set method allowed me to set the value at NumElements" , e1 == -1 , false );
    setValue( arr , -1 , NULL , &e2 );
    Assert( "The set method allowed me to set the value at -1" , e2 == -1 , false );
    return !(e1 | e2);
    }


int test_destroy( Array *arr ) {
    destroyArray( arr );
    return 0;
}


int main( void )
    {
    Array *arr;
    
    int failed = 0;
    failed = test_create( &arr ) || failed;
    failed = test_length( arr ) || failed;
    failed = test_put( arr ) || failed;
    failed = test_length( arr ) || failed;
    failed = test_get( arr ) || failed;
    failed = test_length( arr ) || failed;
    failed = test_out_bounds( arr ) || failed;
    failed = test_destroy( arr ) || failed;

    // Make sure check out of bound errors

    if( failed == 0 )
        {
        printf( "All tests passed\n" );
        }
        else
        {
        printf( "Test faild\n" );
        }
    return 0;
    }
