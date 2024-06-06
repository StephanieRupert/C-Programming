#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "peeplist.h"


/*Node *
getRiders(Node *peeps)
    {
    
    }

Node *
getLighest(Node *peeps)
    {
    }*/

int main(int argc,char **argv)
    {
    FILE *fp;
    Node *peeps;

    if (argc != 2)
        {
        fprintf(stderr,"usage: riders FILENAME\n");
        exit(1);
        }

    if ((fp = fopen(argv[1],"r")) == 0)
        {
        fprintf(stderr,"file %s could not be opened for reading\n",argv[1]);
        exit(2);
        }

    peeps = readPeeps(fp);
    fclose(fp);

    printf("people: ");
    displayPeeps(peeps);
    printf("\n");

    /*printf("legal riders: ");
    getRiders(peeps);
    printf("\n");

    printf("lightest: ");
    getLightest(peeps);
    printf("\n");*/

    //fill in remainder of code here - place functions getRiders and getLightest
    //    in this file
    
    return 0;
    }
