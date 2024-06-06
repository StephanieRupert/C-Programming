#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"


int
main(int argc,char **argv)
    {
    FILE *fp = fopen(argv[1],"r");
    if (fp == 0)
        {
        fprintf(stderr,"File data could not be opened for reading\n");
        exit(1);
        }

    int count = 0;
    float total = 0;

    float data = readReal(fp);
    while (!feof(fp))
        {
        total = total + data;
        data = readReal(fp);
        ++count;
        }

    float avg = total / (float) count;

    printf("The average amount of rain that fell over %d days was %.4f inches.",count,avg);

    fclose(fp);

    return 0;
    }
