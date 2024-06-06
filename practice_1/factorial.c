#include <stdio.h>
#include <stdlib.h>

//Factorial
int
factorial(int n)
    {
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
    }

//Sum of the digits of the number n
int 
sumDigits(int n)
    {
    if (n == 0)
        return 0;
    return n % 10 + sumDigits(n / 10);    
    }

//Digits in a number
int
digits(int num)
    {
    if (num == 0)
        return 0;
    return 1 + digits(num / 10);    
    }

//7s in a number
int
sevenDigits(int num)
    {
    if (num == 0)
        return 0;
    if (num % 10 == 7) 
        return 1 + sevenDigits( num / 10);    
    return 0 + sevenDigits(num / 10);
    }

int
main()
    {
    int i;
    
    for (i = 1; i < 5; i++)
        printf("Factorial of %d is %d\n",i,factorial(i));
    
    printf("Sum of digits: %d\n",sumDigits(314159));
    printf("Sum of digits: %d\n",sumDigits(12345));
    printf("Sum of digits: %d\n",sumDigits(12131415));

    printf("Number of digits of %d: %d\n",15,digits(15));
    printf("Number of digits of %d: %d\n",12345,digits(12345));

    printf("Number of sevens of %d: %d\n",89,sevenDigits(89));
    printf("Number of sevens of %d: %d\n",779,sevenDigits(779));
    
    return 0;
    }
