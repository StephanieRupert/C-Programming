
#ifndef LAB4_ARRAY_H_
#define LAB4_ARRAY_H_

// Needed for size_t
#include <stdlib.h>

//
//  An array holds the raw array along
//  with how many elements it holds
//
typedef struct Array {
    char **arr;
    int arraySize;
    } Array;

//
//  Create an array object which can hold the given number of strings
//  In addition to creating the array object it should set all values
//  to NULL.
//
//  size    -   The number of strings the array can hold
//
//
//  If there is an error the method returns NULL
//
Array *createArray( size_t size );


//
//  Given an array it will release all the resources associated with it.
//
//  arr     -   The array object which we want to destroy
//
//  It should be an error to destroy an already destroyed array object
//
void destroyArray( Array *arr );


//
//  Saves a string in the array if the index is within bounds.
//
//  arr     -   The array object
//  index   -   The position in the array where you wish to save the data
//  data    -   The data you want to save
//  error   -   Pointer to where the error is saved
//
//  If no error then the error value is 0, otherwise -1.
//
void setValue( Array *arr , size_t index , char *data , int *error );


//
//  Get the value saved in the array at the index supplied
//
//  arr     -   The array object
//  index   -   The position in the array where you wish to save the data
//  error   -   Pointer to where the error is saved

//  If no error then the error value is 0, otherwise -1.
//  If errro assume returned value is garbage, do not try to use it
//
char *getValue( Array *arr , size_t index , int *error );


//
//  Given an Array object return how many objects can be stored in it
//
//  arr     -   The array object
//
//  A non-initialized Array object is said to have no space.
//
size_t getLength( Array *arr );



#endif
