#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int 
main(int argc,char **argv)
    {
    int N,P;
    int i = 0;
    char *R;

    N = atoi(argv[1]);

    R = malloc(sizeof(int) * (ceil(log(N)/log(2)) + 1)); 
   
    while(N > 0)
        {
        P = N % 2;
        P = N / 2;

        if (P <= N)
            {
            R[i] = R[i] + 1;
            P = P - N;
            }
         
        else
            R[i] = R[i] + 0;

        }
    
    printf("%s",R);

    return 0;
    }
