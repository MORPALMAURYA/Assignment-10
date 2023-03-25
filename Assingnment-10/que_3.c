// Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)
#include <stdio.h>

int check_even_odd(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = check_even_odd(num);

    if (result == 1)
    {
        printf("%d is even", num);
    }
    else
    {
        printf("%d is odd", num);
    }

    return 0;
}
