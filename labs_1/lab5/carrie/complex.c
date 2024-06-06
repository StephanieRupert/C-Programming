#include <stdio.h>
#include <stdlib.h>


typedef struct com
    {
    double real;
    double imagine;
    } Complex;

double
getreal(Complex *c)
    {
    return c->real;
    }

double
getimagine(Complex *c)
    {
    return c->imagine;
    }

void 
setreal(Complex *c,double value)
    {
    c->real = value;
    }

void 
setimagine(Complex *c,double value)
    {
    c->imagine = value;
    }

Complex *
createComplex(double real,double imagine)
    {
    Complex *c = malloc(sizeof(Complex));
    if (c == 0)
        return c;

    setreal(c,real);
    setimagine(c,imagine);
    return c;
    }

Complex *
addComplex(Complex *c1,Complex *c2)
    {
    double realsum = getreal(c1) + getreal(c2);
    double imaginarysum = getimagine(c1) + getimagine(c2);

    return createComplex(realsum,imaginarysum); 
    }

Complex *
subComplex(Complex *c1,Complex *c2)
    {
    double realdiff = getreal(c1) - getreal(c2);
    double imaginarydiff = getimagine(c1) - getimagine(c2);

    return createComplex(realdiff,imaginarydiff);
    }

Complex *
mulComplex(Complex *c1,Complex *c2)
    {
    double realprod = getreal(c1) * getreal(c2); 
    double imaginaryprod = getreal(c1) * getimagine(c2) + getimagine(c1) * getreal(c2) + getimagine(c1) * getimagine(c2);
    
    return createComplex(realprod,imaginaryprod);
    }

int
main(void)
    {
    double real1,real2,imagine1,imagine2;

    printf("Please enter the first number: ");
    scanf("%lf %lf",&real1,&imagine1);
    printf("Please enter the second number: ");
    scanf("%lf %lf",&real2,&imagine2);
    Complex *c1 = createComplex(real1,imagine1);
    Complex *c2 = createComplex(real2,imagine2); 
    
    Complex *addResult = addComplex(c1,c2);
    printf("The sum is: <%.2f,%.2f>\n",getreal(addResult),getimagine(addResult));

    Complex *subResult = subComplex(c1,c2);
    printf("The difference is: <%.2f,%.2f>\n",getreal(subResult),getimagine(subResult));
    
    Complex *mulResult = mulComplex(c1,c2);
    printf("The product is: <%.2f,%.2f>\n",getreal(mulResult),getimagine(mulResult));
    return 0;
    }

