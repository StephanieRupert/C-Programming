    #include <stdio.h>

    int
    main(int argc,char **argv)
    {
    
    char name[512];
    char answer;

    printf("What is your name? ");
    scanf("%s",name); //DANGEROUS CODE, DO NOT DO THIS IN REAL LIFE!
    printf("hello,%s\n",name);
    printf("Do you find CS100 intellectually stimulating? ");
    scanf(" %c",&answer);
    if (answer == 'Y' || answer == 'y')
        {
        printf("great!\n");
        }
    else
        {
        printf("you will!\n");
        }

    return 0;
    }    
