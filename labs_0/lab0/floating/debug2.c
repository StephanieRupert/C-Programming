//
// Name: Debug2
//
// Description: We want to compute the derivative of a function at 
//              at a given position. Like the last program there is
//              is a bug but this time it is a math exception.
//
// Note:        There are actually a few bugs here!  See if you can 
//              find them all!
//
//  Write anything the want graded to the right of the student tag.
//  If you need more room just add more lines with the student tag
//  like shown.
//
//  STUDENT: In line 41, del is set as an integer, but in line 42, 1.0/1000.0 should be a double. Because 1.0/1000.0 isn't 0, but it is very small, setting it as an integer truncates the decimal places. In line 47, it's essentially dividing by 0. 
//  STUDENT:
//  STUDENT:
//  STUDENT:
//  STUDENT:
//

#include <stdio.h>  // Standard input and output (I/O) functions
#include <stdlib.h> // EXIT_SUCCESS

// f(x) = x^2
// Note: You can play around with this if you want to!
double
function(double x)
    {
    double result = x * x; // compute the result
    printf("The value of x is %f\n",x);
    return result;      // Return the answer
    }

// Compute the derivate at a position
// The derivative is df/dx but we can
// approximate it with the formula:
// df/dx ~ (f(x + del) - f(x)) / del
double
derivative(float x)
    {
    int del,littleOff,atX,slope;
    del = 1.0/1000.0;                 // Smaller delta, better accuracy 
    printf("The value of del is %d\n",del);
    littleOff = function(x + del);    // Compute value a litte bit from x
    atX = function(x);                // Compute value at x
    slope = (littleOff - atX) / del;  // Approximate the slope at the point
    return slope;
    }

// Main entry point
// argc is the number of command line arguments
// argv is an array of arguments
int
main(int argc,char** argv)
    {
    double position = 5;                    // Where we want to find the slope
    double slope = derivative(position);    // Find the slope

    // display to the screen
    printf("The slope of x^2 at the point %0.2f is %0.2f\n",position,slope);

    return EXIT_SUCCESS;
    }
