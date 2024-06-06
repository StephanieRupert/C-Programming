#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"

#define MIDVALUE 127

int
findAverage(int **m, int rows, int cols)
    {
    int i = 0;
    
    while (i < sizeof(m))
        {
        ++i;
        m[i] = m[i] - MIDVALUE;
        }
    
    return 0;
    }

void
updateImage(int **m, int rows, int cols, int adjust)
    {
    int a,b;

    printf("%d %d\n",rows,cols);
    for (a = 0; a < rows; ++a)
        {
        for (b = 0; b < cols; ++b) 
            printf("%d ", m[a][b]);
        printf("\n");
        }

    return;
    }

int **
allocateImage(int rows,int cols)
    {
    int i, **m;

    //allocate the backbone
    m = allocate(sizeof(int *) * rows);
    //allocate the columns for each row
    for (i = 0; i < rows; ++i)
        {
        m[i] = allocate(sizeof(int) * cols);
        }

    return m;
    }
        
int **
readImage(FILE *fp,int *finalRows,int *finalCols)
    {
    int a,b;
    int rows,cols,**m;

    rows = readInt(fp);
    cols = readInt(fp);

    m = allocateImage(rows,cols);

    for (a = 0; a < rows; ++a)
        for (b = 0; b < cols; ++b)
            m[a][b] = readInt(fp);

    *finalRows = rows;
    *finalCols = cols;

    return m;
    }

void
displayImage(int **m,int rows,int cols)
    {
    int a,b;

    printf("%d %d\n",rows,cols);
    for (a = 0; a < rows; ++a)
        {
        for (b = 0; b < cols; ++b) 
            printf("%d ", m[a][b]);
        printf("\n");
        }
    return;
    }

int
main(int argc,char **argv)
    {
    FILE *fp;
    int rows,cols,**image;

    if (argc != 2)
        {
        fprintf(stderr,"usage: adjust IMAGE_FILE_NAME\n");
        exit(-1);
        }

    if ((fp = fopen(argv[1],"r")) == 0)
        {
        fprintf(stderr,"file %s could not be opened for reading\n",argv[1]);
        exit(-2);
        }

    /* read the image */

    image = readImage(fp,&rows,&cols);

    /* compute the average pixel value */

    int avg = findAverage(image,rows,cols);

    fprintf(stderr,"average pixel value: %d\n",avg);
    fprintf(stderr,"adjustment value: %d\n",avg-MIDVALUE);

    /* update the image */

    updateImage(image,rows,cols,avg-MIDVALUE);

    displayImage(image,rows,cols);

    return 0;
    }
