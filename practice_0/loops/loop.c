#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc,char **argv)
    {
    int value;
    int sum = 0;
    int count = 0;
    char *fileName;
    FILE *fp;

    fileName = argv[1];

    fp = fopen(fileName,"w");

    fscanf(fp,"%d",&value);
    while (!feof(fp))
        {
        fscanf(fp,"%lf",&amount);
        sum += value;
        ++count;        //same as count = count + 1;
        fscanf(fp,"%d",&value)
        }

    fclose(fp);
    printf("average: %lf\n",(1.0 * sum) / count;

    return 0;
    }
