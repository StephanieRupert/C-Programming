#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scanner.h"
#include "invlist.h"

int
getInventoryCount(char *name,Node *items)
    {
    //to be written
    return 0;
    }

void
queryInventory(Node *items)
    {
    char *name;

    printf("\nEnter a part name (or 'quit' to exit): ");
    name = readToken(stdin);
    while (strcmp(name,"quit") != 0 )
        {
        int stocked = getInventoryCount(name,items); //to be written

        if (stocked == -1)
            printf("\tWe do not have that item in stock\n");
        else
            printf("\tThere are %d in stock\n", stocked);
        printf("\nEnter a part name (or 'quit' to exit): ");
        name = readToken(stdin);
        }

    printf("Happy happy, joy joy!\n");
    return;
    }

int
main(int argc, char **argv)
    {
    FILE *fp;
    Node *items;
    
    if (argc != 2)
        {
        fprintf(stderr,"usage: inventory INVENTORY_FILE_NAME\n");
        exit(-1);
        }

    if ((fp = fopen(argv[1],"r")) == 0)
        {
        fprintf(stderr,"file %s could not be opened for reading\n",argv[1]);
        exit(-2);
        }

    items = readList(fp);

    displayList(items); //to be finished

    queryInventory(items);

    freeList(items);

    return 0;
    }
