// function to check whether a given number contains a given digit or not.
// (TSRS)
#include <stdio.h>

int contains_digit(int number, int digit)
{
    while (number > 0)
    {
        if (number % 10 == digit)
        {
            return 1;
        }
        number /= 10;
    }
    return 0;
}

int main()
{
    int number, digit;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter a digit: ");
    scanf("%d", &digit);

    if (contains_digit(number, digit))
    {
        printf("%d contains %d\n", number, digit);
    }
    else
    {
        printf("%d does not contain %d\n", number, digit);
    }

    return 0;
}
