#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"
#include "date.h"


Date *
readDate(FILE *fp)
    {
    int month;
    month = readInt(fp);
    
    if (feof(fp))
        {
        return 0;
        }

    Date *d = malloc(sizeof(Date));
    
    d->month = month;
    d->day = readInt(fp);
    d->year = readInt(fp);

    return d;
    }

void
displayDate(Date *d)
    {
    printf("%d/%d/%d",d->month,d->day,d->year);
    }

Date *
compareDates(Date *d,FILE *fp)
    {
    Date *p = readDate(fp);
    Date *q = readDate(fp);

    Date *a;
    if (d->month < q->month)
        a = p;
    else
        a = q;

    printf("%d is earlier than %d\n",a->month,a->month);

    return 0;
    }

int main(int argc,char **argv)
    {
    Date *d;
    FILE *fp = fopen(argv[1],"r");

    d = readDate(fp);
    while (!feof(fp))
        {
        displayDate(d);
        d = readDate(fp);
        }
   
    fclose(fp);

    return 0;
    }

