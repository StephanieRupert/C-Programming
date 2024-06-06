//Contains the functions for reading, writing, inverting,
//swapping, flipping, and rotating
//Stephanie Rupert
//April 6, 2015

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "scanner.h"
#include "ppm.h"


//Reads in ppm file
ppmPic *
readPic(FILE *fp)
    {
    int i,j;
    
    ppmPic *myPic = malloc(sizeof(ppmPic));
    readToken(fp);
    myPic->cols = readInt(fp);
    myPic->rows = readInt(fp);
    myPic->colors = readInt(fp);
    
    myPic->pixels = malloc(sizeof(Pixel *) * myPic->rows);
    
    for(i = 0; i < myPic->rows; ++i)
        {
        myPic->pixels[i] = malloc(sizeof(Pixel) * myPic->cols);
        for(j = 0; j < myPic->cols; ++j)
            {
            myPic->pixels[i][j].red = readInt(fp);
            myPic->pixels[i][j].green = readInt(fp);
            myPic->pixels[i][j].blue = readInt(fp);
            }
        } 
    return myPic;
    }

//Writes out ppm file
void
writePic(FILE *fp,ppmPic *myPic)
    {
    int i,j;

    fprintf(fp,"P3\n");
    fprintf(fp,"%d ",myPic->cols);
    fprintf(fp,"%d ",myPic->rows);
    fprintf(fp,"%d\n",myPic->colors);

    for(i = 0; i < myPic->rows; ++i)
        {
        for(j = 0; j < myPic->cols; ++j)
            {
            fprintf(fp,"%d ",myPic->pixels[i][j].red);
            fprintf(fp,"%d ",myPic->pixels[i][j].green);
            fprintf(fp,"%d ",myPic->pixels[i][j].blue);
            }
        }
    }

//Inverts red, green, and blue values
void
invert(FILE *fp,ppmPic *myPic)
    {
    int i,j;

    for(i = 0; i < myPic->rows; ++i)
        {
        for(j = 0; j < myPic->cols; ++j)
            {
            myPic->pixels[i][j].red = myPic->colors - myPic->pixels[i][j].red;
            myPic->pixels[i][j].green = myPic->colors - myPic->pixels[i][j].green;
            myPic->pixels[i][j].blue = myPic->colors - myPic->pixels[i][j].blue;
            }
        }
    }

//Swaps the image from left to right
void
swap(FILE *fp,ppmPic *myPic)
    {
    int i,j;
    Pixel temp;

    for(i = 0; i < myPic->rows; ++i)
        {
        for(j = 0; j < myPic->cols/2; ++j)
            {
            temp = myPic->pixels[i][j];
            myPic->pixels[i][j] = myPic->pixels[i][myPic->cols - 1 - j];
            myPic->pixels[i][myPic->cols - 1 - j] = temp;
            }
        }    
    }


//Flips the image from top to bottom
void
flip(FILE *fp,ppmPic *myPic)
    {
    int i;
    Pixel *temp;

    for (i = 0; i < myPic->rows/2; ++i)
        {
        temp = myPic->pixels[i];
        myPic->pixels[i] = myPic->pixels[myPic->cols - 1 - i];
        myPic->pixels[myPic->cols - 1 - i] = temp;
        }
    }

//Rotate the image 90 degrees clockwise
void
rotate(FILE *fp,ppmPic *myPic)
    {
    int i,j;
     
    ppmPic *newPic = malloc(sizeof(ppmPic));
    readToken(fp);
    newPic->cols = myPic->rows;
    newPic->rows = myPic->cols;
    newPic->colors = myPic->colors;
     
    newPic->pixels = malloc(sizeof(Pixel *) * newPic->rows);
     
    for(i = 0; i < newPic->rows; ++i)
        {
        newPic->pixels[i] = malloc(sizeof(Pixel) * newPic->cols);
        for(j = 0; j < newPic->cols; ++j)
            {
            newPic->pixels[i][j] = myPic->pixels[i][j]; 
            }
        } 
    }
