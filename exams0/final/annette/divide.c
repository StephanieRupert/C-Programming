#include <stdio.h>
#include "splitters.h"

typedef void (*fptr)(FILE *, FILE *, FILE *);

int
chooseSplitter(void)
    {
    int num;

    printf("Select how you wish divide the integers:\n");
    printf("\t1. positive numbers to the first file, the rest to the second\n");
    printf("\t2. even numbers to the first file, the rest to the second\n");
    printf("\t3. alternate\n");
    printf("Enter your choice: ");
    scanf("%d", &num);

    return num;
    }

fptr
getSplitter(int id)
    {
    if (id == 1)
        return x;
    else if (id == 2)
        return y;
    else
        return z;
    }

int
main(int argc,char **argv)
    {
    int mode;
    FILE *fpIn = fopen(argv[1], "r");    //failure check omitted
    FILE *fpOut1 = fopen(argv[2], "w");  //failure check omitted
    FILE *fpOut2 = fopen(argv[3], "w");  //failure check omitted
    fptr p;

    printf("\nDividing %s...\n",argv[1]);

    //get the splitting mode
    mode = chooseSplitter();

    //get the selected splitting function
    p = getSplitter(mode);

    // call the selected function
    p(fpIn,fpOut1,fpOut2);

    //close all files
    fclose(fpIn);
    fclose(fpOut1);
    fclose(fpOut2);

    printf("done.\n");

    return 0;
    }
