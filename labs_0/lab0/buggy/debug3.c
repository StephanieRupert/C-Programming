//
// Name: Debug3
//
// Description: This program is supposed to convert from Fahrenheit 
//              to Celsius but there is a bug!  Unlike the previous
//              programs this bug does not crash.  Try to find the
//              line where the bug occurs.
//
//  Write anything the want graded to the right of the student tag.
//  If you need more room just add more lines with the student tag
//  like shown.
//
//  STUDENT: In line 32, 5/9 is .55555556, but because ratio is set as an integer, I'm guessing that it's truncating to 0. In the next line, 33, that would be 0 * (temp - 32.0) and anything times 0 is 0.
//  STUDENT:
//  STUDENT:
//  STUDENT:
//  STUDENT:
//

#include <stdio.h>  // Standard input and output (I/O) functions
#include <stdlib.h> // EXIT_SUCCESS

//
//  Convert a temperature from fahrenheit to celsius
//
double
fahrenheitToCelsius(double temp)
    {
    int ratio;
    double cel;
    ratio = 5.0/9.0;                // Compute the ratio to multiple by!
    cel = ratio * (temp - 32.0); // (5/9) * (F - 32)
    return cel;
    }

// Main entry point
// argc is the number of command line arguments
// argv is an array of arguments
int
main(int argc,char** argv)
    {
    double tempFahrenheit;
    double tempCelsius;
    
    tempFahrenheit = 212;                               // Boiling point

    tempCelsius = fahrenheitToCelsius(tempFahrenheit);  // Convert to Celsius

    // tempCelsius should be 100 here
    
    // Display to screen!
    printf("%0.1f degrees Fahrenheit is %0.1f degrees Celsius\n",
        tempFahrenheit,tempCelsius);

    return EXIT_SUCCESS;  // everything is okay!
    }
