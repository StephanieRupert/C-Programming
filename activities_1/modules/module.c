#include "module.h"

double
foo(int x,double y)
    {
    return x * y;
    }

double
bar(int x,double y)
    {
    return y + foo(x,y);
    }

double
baz(int x,double y)
    {
    return y - x;
    }

