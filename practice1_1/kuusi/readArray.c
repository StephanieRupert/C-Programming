#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"

/* A demonstration program for reading in an array of integers
 *
 * written by John C. Lusth
 *
 */

/* readIntArray 
 *  - this function works by reading in a line of integers (which is 
 *    really a line of tokens). The line is tokenized by the strtok
 *    function in the string library (thus the need to include <string.h>).
 *  - the function can take any number of tokens, the original array
 */

//Modified by Stephanie Rupert to read in an array of doubles 
//March 10, 2015

int *
readIntArray(double *finalSize)
    {
    int count = 0;
    int size = 10;
    double *array = malloc(sizeof(int)*10);
    char *line;
    char *token;

    line = readLine(stdin);
    /* get the first token from the line */
    token = strtok(line," \t\n");
    while (token != 0)
        {
        /* grow the array if it is full */
        if (count == size)
            {
            size *= 2;
            array = realloc(array,sizeof(int) * size);
            }
        /* at this point, the array must have room so store the */
        /* the converted token */
        array[count] = atof(token);                     //changed from atoi
        ++count;
        /* get the next token */
        token = strtok(0," \t\n");
        }
    /* shrink the array to the actual number of tokens read */
    array = realloc(array,sizeof(int) * count);
    /* set the final size */
    *finalSize = count;
    /* free the input line, we're done with it */
    free(line);
    return array;
    }

/* displayIntArray
 *  - takes an array and a size and prints the array like this:
 *        [1,3,5,3,7,8]
 *  - the last formal argument is usuall the empty string or a newline
 */

void
displayIntArray(double *items,double size,char *last)
    {
    int i;
    printf("[%.2f",items[0]);
    for (i = 1; i < size; ++i)
        printf(",%.2f",items[i]);
    printf("]%s",last);
    return;
    }

int *
reverse()
    {
     
    }

int
main(int argc,char **argv)
    {
    double *a;
    double size;

    printf("Enter a bunch of real numbers, all on one line: ");
    a = readIntArray(&size);
    displayIntArray(a,size,"\n");
    return 0;
    }


