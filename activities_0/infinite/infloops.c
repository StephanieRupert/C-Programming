#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int
main(int argc,char **argv)
    {
//test
    int i = 1;
    int sum = 0;

//Sum the numbers from 1 to 100 (inclusive)

    printf("LOOP 1...\n");
    i = 1;
    while (i <= 100)
        {
        sum = sum + 1;
        
        printf("Sum changed to %d\n",sum);
        printf("Pausing...press <Enter> to continue.");
        getchar();
        
        i = i + 1;
        }

//Display the numbers 1 through 10 in either ascending or descending
//  order (your choice)

    printf("LOOP 2...\n");
    i = 0;
    while (i <= 10)
        {
        printf("%d\n",i);
        i = i + 1;
        }

//Print the items in a list of strings that start with the 'a' character

    char *wordlist[] = {"ant","bear","cat","apple","brown","claw","aunt","bug","cow"};

    printf("LOOP 3...\n");
    i = 0;
    while (i < sizeof(wordlist) / sizeof(char *))
        {
        char *s = wordlist[i];
        if (s[0] == 'a')
            {
            printf("Found word: %s\n",s);
            }
        else
            printf("skipping %s\n",s);
        i = i + 1;
        }
    
    return 0;
    }
