#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
char *
allocate(int size)
    {
    char *s = malloc(size);
    //check ommited
    return s;
    }

void
searchInt(int argc,char **argv,int *numbers)
    {
    int i;
    
    for (i = 1; i < argc; ++i)
        numbers[i-1] = atoi(argv[i]);

    }   
*/

int 
main(int argc,char **argv)
    {
    /*
    int i;
    int *nums;

    nums = allocate(sizeof(int) * (argc - 1));
    searchInt(argc,argv,nums);

    for (i = 1; i < argc - 1; ++i)
        printf("argv[%d] looks like a non-zero integer\n",nums[i]); 
    
    printf("\n");
    */
    
    int i = 1;
    while (i < argc)
        {
        if (atoi(argv[i]) != 0)
            printf("argv[%d] looks like a non-zero integer\n",i);
        ++i;
        }
    
    return 0;
    }
