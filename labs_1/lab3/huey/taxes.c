#include <stdio.h>
#include <stdlib.h>

double taxRate;

double
getTaxBracket(double income)
    {
    if (income <= 9225)
        taxRate = 10;    
    else if (income <= 37450)
        taxRate = 15;
    else if (income <= 90750)
        taxRate = 25;
    else if (income <= 189300)
        taxRate = 28;
    else if (income <= 411500)
        taxRate = 33;
    else if (income <= 413200)
        taxRate = 35;
    else
        taxRate = 39.6;
    
    return taxRate;
    }

double
computeTaxes(double income,double taxRate)
    {
    double taxesPaid;

    taxesPaid = income * (taxRate / 100);
    
    return taxesPaid;
    }

int
main(int argc,char **argv)
    {
    double income;

    printf("Please enter your income: ");
    scanf("%lf",&income);

    printf("You make $%.2lf\n",income);
    printf("Your tax percentage is %.1lf%%\n",getTaxBracket(income));
    printf("You pay $%.2lf in taxes leaving you with $%.2lf\n",computeTaxes(income,taxRate),income - computeTaxes(income,taxRate));

    return 0;
    }
