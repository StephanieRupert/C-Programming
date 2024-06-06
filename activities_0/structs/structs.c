#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "scanner.h"
#include "date.h"


Date *
readDate(FILE *fp)
    {
    char *month;

    month = readInt(fp);

    if (feof(fp))
        {
        return 0;
        }

    Date *d = malloc(sizeof(Date));
    d->month = month;
    d->day = readInt(fp);
    d->year = readInt(fp);

    printf("Month: %d\n",d->month);
    printf("Day: %d\n",d->day);
    printf("Year: %d\n",d->year);
    return d;
    }

void
displayDate(Date *d)
    {
    printf("%d\n",d->month);
    printf("%d\n",d->month);
    }

Date *
compareDates(Date *d)
    {
    FILE *fp;
    
    Date *p = readDate(fp);
    Date *q = readDate(fp);

    displayDate(p);
    displayDate(q);

    Date *a;
    if (d->month < q->month)
        a = p;
    else
        a = q;

    printf("%d is earlier than %d\n",a->month);

    return 0;
    }

int main(int argc,char **argv)
    {
    FILE *fp = fopen(argv[1],"r");

    compareDates(Date *d);

    return 0;
    }
