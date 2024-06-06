#include <stdio.h>
#include <stdlib.h>


int
main(void)
    {
    int a;
    int num;
    int value;

    printf("Enter the number of values to generate: ");
    scanf("%d",&num);
    FILE *fp = fopen("generate.txt","w");
    
    for (a = 0; a < num; a++)
        {
        value = rand() % 5 + 1;
        fprintf(fp,"%d\n",value);
        }
    
    fclose(fp);

    return 0;
    }
