//Use ctrl+d to force print EOF character

#include <stdio.h>

int
main(void)
    {
    int a,b,num,count[5];
    //Initialize the array
    
    for (a = 0; a < 5; a++)
        count[a] = 0;
    
    printf("Enter numbers range 1-5:\n");
    scanf("%d",&num);
    
    while (!feof(stdin))
        {
        if (num >= 1 && num <= 5)
            count[num - 1]++;
        scanf("%d",&num);    
        }
    
    //Generate the histogram:
    
    printf("Simple histogram of data\n\n");
    for (a = 0; a < 5; a++)
        {
        printf("%d (%3d): ",a+1,count[a]);
        
        //Actual count of occurences:
        
        for (b = 0; b < count[a]; b++)
            printf("X");
        printf("\n");
        }

    return 0;    

    }
