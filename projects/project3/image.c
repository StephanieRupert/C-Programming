//Contains main function that uses the functions in ppm.c
//Stephanie Rupert
//April 6, 2015

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "ppm.h"


int
main(int argc,char **argv)
    {
    int i;
    ppmPic *myPic;
    
    if (argc < 1)
        printf("Type -i or --invert to invert ppm, -f or --flip to flip ppm, -s or --swap to swap ppm, -r or --rotate to rotate ppm. Type -o or --output with a filename directly after to specify a new ppm file. Last command line argument should be the original ppm file.");
    
    FILE *fp = fopen(argv[argc - 1],"r");
    if (fp == 0)
        {
        fprintf(stderr,"File could not be opened for reading\n");
        exit(1);
        }
    
    myPic = readPic(fp);   
        
    for (i = 1; i < argc; ++i)
        {
        if (strcmp(argv[i], "-o") == 0)
            {
            FILE *fp = fopen(argv[i + 1],"w");
            if (fp == 0)
                {
                fprintf(stderr,"File could not be opened for writing\n");
                exit(1);
                }
            writePic(fp,myPic);    
            }   
        else if (strcmp(argv[i], "--output") == 0)
            {
            FILE *fp = fopen(argv[i + 1],"w");
            if (fp == 0)
                {
                fprintf(stderr,"File could not be opened for writing\n");
                exit(1);
                }
            writePic(fp,myPic);    
            }   
        
        else if (strcmp(argv[i], "-i") == 0)
            invert(fp,myPic);
        else if (strcmp(argv[i], "--invert") == 0)
            invert(fp,myPic);
        
        else if (strcmp(argv[i], "-s") == 0)
            swap(fp,myPic);
        else if (strcmp(argv[i], "--swap") == 0)
            swap(fp,myPic);
        
        else if (strcmp(argv[i], "-f") == 0)
            flip(fp,myPic);
        else if (strcmp(argv[i], "--flip") == 0)
            flip(fp,myPic);
        
        else if (strcmp(argv[i], "-r") == 0)
            rotate(fp,myPic);
        else if (strcmp(argv[i], "--rotate") == 0)
            rotate(fp,myPic);
        
        else
            writePic(stdout,myPic);
            
        
        }

    return 0;
    }
