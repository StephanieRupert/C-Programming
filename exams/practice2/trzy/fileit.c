#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "slist.h"
#include "scanner.h"


char *
shortest(Node *z)
    {
    if (tail(z) == 0)
        return head(z);
    else if (strlen(head(z)) < strlen(shortest(tail(z))))
        return head(z);
    else
        return shortest(tail(z));
    }    

Node *
readingStrings(FILE *fp)
    {
    char *s = readString(fp);
    Node *items = 0;

    while (!feof(fp))
        {
        items = join(s,items);
        s = readString(fp);
        }
    
    return items;
    }

int
main(int argc,char **argv)
    {
    Node *items = readingStrings(fopen(argv[1],"r"));
    Node *spot = items;
    
    while (spot != 0)
        {
        printf("%s\n",head(spot));
        spot = tail(spot);
        }
    
    printf("The shortest string is %s\n",shortest(items));

    return 0;
    }
