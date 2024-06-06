#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "plist.h"

int
main(int argc,char **argv)
    {
    Node *p;
    FILE *fp;
    
    if (argc != 2)
        {
        fprintf(stderr,"usage: poly FILENAME\n");
        exit(1);
        }

    fp = fopen(argv[1],"r"); //check for failure omitted
    if (fp == 0)
        {
        fprintf(stderr,"file %s could not be opened for reading\n",argv[1]);
        exit(2);
        }

    p = readPoly(fp);
    printf("p  is ");
    displayPoly(p);
    printf("\n");

    int x;
    printf("Evaluate at what value of x? ");
    scanf("%d",&x);
    printf("When x = %d, y is %d\n",x,evalPoly(p,x));
    
    return 0;
    }
