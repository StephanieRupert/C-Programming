
#include "task1.h"

/* 
    Compute the value of result, initially it is 1 

    You must use the variables a, r, and result.

    Please see the lab instructions for more details 

*/
double geometricSeries( double a , double r ) {
    double result = a + (a * r) + (a * r * r) + (a * r * r * r) + (a * r * r * r * r) + (a * r * r * r * r * r);

    return result;
}
