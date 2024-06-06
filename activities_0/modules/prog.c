#include <stdio.h>
#include "module.h"

//compile with module.c

int
main(int argc,char **argv)
    {

    printf("foo(3,4.1) is %lf\n",foo(3,4.1));
    printf("bar(1,2.2) is %lf\n",bar(3,2.2));
    printf("baz(5,4.3) is %lf\n",baz(3,4.3));

    return 0;
    }
    
