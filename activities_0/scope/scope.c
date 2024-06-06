#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

    
double n = 2;
   
double sqrootHelper(double g,double v)
    {
    
    double error = .0000001;
    double average = (g + v / g) / 2;
        if (fabs(g * g - v) < v * error)
            return g;
        else
            return sqrootHelper(average,v);
    
    printf("In function sqrootHelper, variable n is %f\n",n);
    printf("In function sqrootHelper, variable error is %f\n",error);
    printf("In function sqrootHelper, variable average is %f\n",average);
    printf("In function sqrootHelper, variable g is %f\n",g);
    printf("In function sqrootHelper, variable v is %f\n",v);
    
    }

double sqroot(double x)
    {
    
    printf("In function sqrootHelper, variable n is %f\n",n);
    printf("In function sqrootHelper, variable x is %f\n",x);
    
    return sqrootHelper(1,x);
    }
        
int
main(int argv,char **argc)
    {
    
    printf("The square root of %f is %.15f\n",n,sqroot(n));
    
    printf("In function sqrootHelper, variable n is %f\n",n);
    printf("In function sqrootHelper, variable argv is %d\n",argv);
    printf("In function sqrootHelper, variable argc is %p\n",argc);

    return 0;
    }
