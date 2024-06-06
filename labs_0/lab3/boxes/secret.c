#include <stdio.h>

int a;

void setA(void)
    {
    a = 10;
    }

// 4 points
int handleThrees( int b )
    {
    if( b == 3 )
        {
        b = b + 5;
        }
    else
        {
        b = a;
        }

    // VARIABLE : b - 8 
    return b;
    }

// 4 points
int handleFours( int c ) {
    if( c == 4 )
        {
        c = a + c;
        }
    else
        {
        c = a - 4;
        }

    // VARIABLE : c - 14
    return c;
}

// 4 points
int handleSevens( int a )
    {
    if( a == 7 )
        {
        int b = 2;
        b = 5 * 2;
        a = b;
        }

    // VARIABLE : b - Out of scope
    return a;
    }



// 12 points
int main( int argc , char *argv[] )
    {
    int a = 3;
    int b = 4;
    int c = 7;

    setA();

    a = handleThrees( a );
    b = handleFours( b );
    c = handleSevens( c );

    // VARIABLE a - 8
    // VARIABLE b - 14
    // VARIABLE c - 10
    
    return 0;
    }
