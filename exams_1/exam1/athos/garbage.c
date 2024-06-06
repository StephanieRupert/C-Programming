#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"


int
main(int argc,char **argv)
    {
    FILE *in = fopen(argv[1],"r");
    if (in == 0)
        {
        fprintf(stderr,"file data could not be opened for reading\n");
        exit(1);
        }
    
    FILE *out = fopen(argv[4],"w");
    if (out == 0)
        {
        fprintf(stderr,"file data could not be opened for writing\n");
        exit(1);
        }
    
    int min,max,number;
    min = atoi(argv[2]);
    max = atoi(argv[3]);
    
    number = readInt(in); 
    while (!feof(in))
        {
        if ((number < max) && (number >= min)) 
            fprintf(out,"%d\n",number);
        number = readInt(in);    
        }    
    
    fclose(in);
    fclose(out);
    
    return 0;
    }
