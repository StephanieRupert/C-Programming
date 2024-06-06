#include <stdio.h>
#include <stdlib.h>

int
main()
    {
    int a;
    int num;
    int sum = 0;

    //Loop runs exactly N times
    //Read value
    //Processs value

    for (a = 0; a < 10; a++)
        {
        scanf("%d",&num);
        sum += num;
        }

    //Input has a sentinel value
    //      Read an initial value
    //      While (value is not a "sentinel")
    //          Process value
    //          Read next value

    scanf("%d",&num);
    while (num != -1)
        {
        sum += num;
        scanf("%d",&num);
        }

    //No idea how many values
    //      Read until the end of file (EOF)
    //          Try to read an initial value
    //          While (you have not hit EOF)
    //              Process value
    //              Try to read the next value

    scanf("%d",&num);
    while (!feof(stdin))
        {
        sum += num;
        scanf("%d",&num);
        }

    printf("The sum is %d\n",sum);    

    }
