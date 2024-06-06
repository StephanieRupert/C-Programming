#include <stdio.h>
#include <stdlib.h>

Location *
basic_location_logic(Adventurer *a,Location *b,char *verb,char *noun)
        {
        Location *B = b;      //assume next location B is the current one
        b->visited = 1;
        if (strcmp(verb,"north") == 0)
            B = findLocation(b->north);
        else if (strcmp(verb,"south") == 0)
            B = findLocation(b->south);
        else if (strcmp(verb,"east") == 0)
            B = findLocation(b->east);
        else if (strcmp(verb,"west") == 0)
            B = findLocation(b->west);
        else
            printf("I can't do that.\n");

        if (B == 0)
            return b;
        else
            return B; //B should hold the next location
        }
