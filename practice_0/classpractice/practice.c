#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "scanner.h"

int
larger(int x,int y,int z,int w)
    {
    if (w > z)
        return w;
    else if (z > y) 
        return z;
    else if (y > x) 
        return y;
    else
        return x;
    }    

int 
main(int argc, char **argv)
    {
    int x,y,z,w;
    int result;
    
    FILE *fp;
    
    /*if (argc != 2)
        {
        fprintf(stderr,"usage: max FILENAME\n");
        exit(-1)
        }
    fp = fopen(argv[0],"r"); if you wanted to pass in the name of the file*/
    
    fp = fopen("data","r");

    //printf("Give me an integer: ");
    //scanf("%d",&x);
    x = readInt(fp);
    //printf("Give me another integer: ");
    y = readInt(fp);
    //scanf("%d",&y);
    z = readInt(fp);
    w = readInt(fp);

    fclose(fp);

    result = larger(x,y,z,w);
    
    printf("%d is the larger of %d, %d, %d, and %d",result,x,y,z,w);
    
    return 0;
    }

