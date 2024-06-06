#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"


int
search(int *A,int v,int l,int r)
    {
    if (r <= l)
        return -1;
    
    else if (A[(l+r)/2] < v)    
        return search(A,v,(l+r)/2 + 1,r);
    
    else if (A[(l+r)/2] > v)
        return search(A,v,l,(l+r)/2);
    
    else
        return (l+r)/2;
    }    

int
count(char *filename)
    {
    int count;
    
    FILE *fp = fopen(filename,"r");
    if (fp == 0)
        {
        fprintf(stderr,"File data could not be opened for reading\n");
        exit(1);
        }
    
    count = 0;
    readInt(fp);
    while (!feof(fp))
        {
        count = count + 1;
        readInt(fp);
        }
    
    fclose(fp);

    return count;
    }

int *
fill(char *filename,int *array)
    {
    int x;
    int i;
    FILE *fp = fopen(filename,"r");
    
    i = 0;
    x = readInt(fp);
    while(!feof(fp))
        {
        array[i] = x;
        i = i + 1;
        x = readInt(fp);
        }
    
    fclose(fp);

    return array;
    }

int
main(int argc,char **argv)
    {
    char *data = argv[1];
    int c,v,position;
    c = count(data);

    int *num = malloc(sizeof(int) * c);
    int *A = fill(data,num);

    printf("Enter the number to search for: ");
    scanf("%d",&v);
   
    int l = 0;
    int r = c;
    position = search(A,v,l,r);

    if (position == -1)
        printf("The number was not contained in the file");
    
    else
        printf("The number was found at position %d",position);
    
    return 0;
    }
