#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"
#include "struct.h"

Player *
readPlayer(FILE *fp)
    {
    char *name;

    name = readString(fp);
    
    if (feof(fp)) return 0;

    Player *p = malloc(sizeof(Player));
    p->name = name;
    p->matchesWon = readInt(fp);
    p->matchesLost = readInt(fp);
    p->majorsWon = readInt(fp);
    p->age = readInt(fp);
    p->earnings = readInt(fp);

    return p;
    }

void
displayPlayer(Player *p)
    {
    printf("%s\n",p->name);
    printf("    %s: %d\n","matches won",p->matchesWon);
    printf("    %s: %d\n","matches lost",p->matchesLost);
    }


int main(int argc,char **argv)
    {
    FILE *fp = fopen(argv[1],"r");              //should check
    
    Player *p = readPlayer(fp);                 //pointers to structures
    Player *q = readPlayer(fp);
    
    displayPlayer(p);
    displayPlayer(q);
    
    Player *a;
    if (p->earnings > q->earnings)
        a = p;
    else
        a = q;

    printf("%s has the higher earnings: $%.1fM\n", a->name,a->earnings);
    
    fclose(fp);

    return 0;
    }
