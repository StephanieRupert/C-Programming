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

    if (feof(fp)) {return 0;}

    Date *d = malloc(sizeof(Date));
    d->month = month;
    d->day = readInt(fp);
    d->year = readInt(fp);

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

    return 0;
    }

Date *
firstDate(Date *d)
    {
    int size = sizeof(d)/sizeof(Date *);
    int i = 0;

    Date *first = dates[i];

    while (i < size)
        {
        Date *d = d[i + 1];
        int result = compareDates(first,d);
        if (result == 1)
            first = d;
        ++i;
        }
        
    printf("%d is the first date\n",a->month);

    return first;
    }

int main(int argc,char **argv)
    {
    FILE *fp = fopen(argv[1],"r");

    firstDate(Date *d);

    return 0;
    }
