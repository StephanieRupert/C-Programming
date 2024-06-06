//
// Name: Debug1
//
// Description: Supposed to compute the average of the numbers stored in data.
//              but there is a bug!  Crashes with a segfault which means it 
//              was reading memory not assigned to it.  Try to find out the
//              line where the program is crashing.
//
//  Write anything the want graded to the right of the student tag.
//  If you need more room just add more lines with the student tag
//  like shown.
//
//  STUDENT: Error occurs at line 35 and 63.
//  STUDENT: Not sure exactly what's happening, but I can guess that it's because i is never defined and we are adding 1 to it. Does that create junk?
//  STUDENT:
//  STUDENT:
//  STUDENT:
//  

#include <stdio.h>  // Standard input and output (I/O) functions
#include <stdlib.h> // EXIT_SUCCESS, memory allocation and de-allocation

// 640 KB should be enough
#define NumInts 640 * 1024

// Set the value of each entry in data
// data = { 1,2,3,...,NumInts }
// no return because it is void
void
setData(int *data,int count)
    {
    int i;
    for (i = 0; i < count; ++i)
        {
        data[i] = i + 1;
        }
    }

// Computes the average of all the numbers 
// in data.
// avg = (data[0] + ... + data[count-1])/count
// return type is integer
int
compute(int *data,int count)
    {
    int i,sum;
    for (sum = 0,i = 0; i < count; ++i)
        {
        sum += data[i];
        }
    return sum / count;
    }

// Main entry point
// argc is the number of command line arguments
// argv is an array of arguments
int
main(int argc,char** argv)
    {
    int avg;        // save average here
    int *data = 0;  // pointer/array

    setData(data,NumInts);  // Set element i in data array to the value i + 1

    avg = compute(data,NumInts); // Compute the average of all numbers in data

    printf("The average is %d\n",avg);    // Display to the screen

    free(data);   // Release he memory back to the OS

    return EXIT_SUCCESS;    // The O/S expects a number and this means no error!
    }
