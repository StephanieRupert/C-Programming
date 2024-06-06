#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "scanner.h"


/*void
convert(int argc,char **argv,int *numbers)
    {
    int i;
    for (i = 1; i < argc; ++i)
        numbers[i-1] = atoi(argv[i]);
    } */   


int 
main(int argc,char **argv)
    {
    FILE *in = fopen("in.txt","r");
    FILE *out = fopen("out.txt","w");

    int count = 0;
    int number;

    int input = atoi(argv[1]);

    number = readInt(in);
    while (!feof(in))
        {
        if (input == number)
            ++count;
        fprintf(out,"%d\n",number);
        number = readInt(in);
        }

    fclose(in);
    fclose(out);
    
    return 0;
    }
