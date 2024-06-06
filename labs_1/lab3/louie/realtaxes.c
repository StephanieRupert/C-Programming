#include <stdio.h>
#include <stdlib.h>


double
getTaxBracket(double income)
    {
    double tax0,tax1,tax2,tax3,tax4,tax5,tax6;
    double income0,income1,income2,income3,income4,income5,income6;
    
    if (income > 413200) 
        {
        tax0 = ((income - 413200) * ((39.6 / 100))) + (1700 * (35 / 100)) 
        + (222200 * (33 / 100)) + (98500 *(28 / 100))
        + (53300 * (25 / 100)) + (28225 * (15 / 100))
        + (9225 * (10 / 100)); 
        income0 = income - tax0;
        return income0; 
        }

    else if (income < 413200 && income >= 411500)
        {
        tax1 = (1700 * (35 / 100)) + (222200 * (33 / 100)) +
        (98500 * (28 / 100)) + (53300 * (25 / 100)) + (28225 * (15 / 100))
        + (9225 * (10 / 100));
        income1 = income - tax1;
        return income1; 
        }

    else if (income >= 189300 && income < 411500)
        {
        tax2 = (222200 * (33 / 100)) +
        (98500 * (28 / 100)) + (53300 * (25 / 100)) + (28225 * (15 / 100))
        + (9225 * (10 / 100));
        income2 = income - tax2;
        return income2; 
        }

    else if (income >= 90750 && income < 189300)
        {
        tax3 = (98500 * (28 / 100)) + (53300 * (25 / 100)) + 
        (28225 * (15 / 100))
        + (9225 * (10 / 100));
        income3 = income - tax3;
        return income3; 
        }

    else if (income >= 37450 && income < 90750)
        {
        tax4 = (53300 * (25 / 100)) + 
        (28225 * (15 / 100))
        + (9225 * (10 / 100));
        income4 = income - tax4;
        return income4; 
        }

    else if (income >= 9225 && income < 37450)
        {
        tax5 = (28225 * (15 / 100))
        + (9225 * (10 / 100));
        income5 = income - tax5;
        return income5; 
        }

    else if (income < 9225)
        {
        tax6 = ((income - 0) * (10 / 100));
        income6 = income - tax6;
        return income6; 
        }
    
    else
        return 0;
    }


int
main(int argc,char **argv)
    {
    double income;
    income = atoi(argv[1]);

    printf("You make $%.2lf\n",income);
    printf("You pay in taxes leaving you with %.2lf\n",getTaxBracket(income));

    return 0;
    }
