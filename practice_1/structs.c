#include <stdio.h>
#include <stdlib.h>

struct
student 
    { 
    int CWID;
    char *first;
    char *last;
    int phone;
    };

int
main(void)
    {
    struct student a;
    a.CWID = 5;
    a.phone = 2053449999;
    a.first = "John";
    a.last = "Smith";

    printf("%s, %s\t%d %d\n",a.last,a.first,a.CWID,a.phone);

    struct student *b;
    b = malloc(sizeof(struct student));

    b->CWID = 10;
    b->phone = 1234567890;
    b->last = "Doe";
    b->first = "Jane";

    printf("%s, %s\t%d %d\n",b->last,b->first,b->CWID,b->phone);
    }
