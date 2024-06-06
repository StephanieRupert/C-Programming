#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "location.h"
#include "scanner.h"

void
readIn()
    {
    FILE *fp = fopen("descriptions.txt","r");
    loc = malloc(sizeof(Location));
    attr = readToken(fp);
    if (feof(fp)) return 0; //no more locations
    while (strcmp(attr,";") != 0) 
        {
        if (strcmp(attr,"name") == 0)
            loc->name = readToken(fp);
        else if (strcmp(attr,"longer") == 0)
            loc->longer = readString(fp);
        else if (strcmp(attr,"shorter") == 0)
            loc->longer = readString(fp);
        else if (strcmp(attr,"north") == 0)
            loc->north = readToken(fp);
        else if (strcmp(attr,"south") == 0)
            loc->north = readToken(fp);
        else if (strcmp(attr,"east") == 0)
            loc->north = readToken(fp);
        else if (strcmp(attr,"west") == 0)
            loc->north = readToken(fp);
        
        attr = readToken(fp);
        }
    }
