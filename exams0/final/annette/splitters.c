#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "scanner.h"

void 
x(FILE *fp1, FILE *fp2, FILE *fp3)
    {
    int count = 0;
    int token;

    token = readInt(fp1);
    while (!feof(fp1))
        {
        ++count;
        if (token > 0)
            fprintf(fp2,"%d ",token);
        else
            fprintf(fp3,"%d ",token);
        token = readInt(fp1);
        }    
    
    }

void    
y(FILE *fp1, FILE *fp2, FILE *fp3)
    {
    int count = 0;
    int token;

    token = readInt(fp1);
    while (!feof(fp1))
        {
        ++count;
        if (token % 2 == 0)
            fprintf(fp3,"%d ",token);
        else
            fprintf(fp2,"%d ",token);
        token = readInt(fp1);
        }    
    
    }

void
z(FILE *fp1, FILE *fp2, FILE *fp3)
    {
    int count = 0;
    int token;

    token = readInt(fp1);
    while (!feof(fp1))
        {
        ++count;
        fprintf(fp2,"%d ",token);
        token = readInt(fp1);
        fprintf(fp3,"%d ",token);
        token = readInt(fp1);
        }    
    
    }   

