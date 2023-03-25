// Write a function to print first N natural numbers (TSRN)

#include <stdio.h>

void print_natural_numbers(int n)
{
    int i;

    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are: ", n);
    print_natural_numbers(n);

    return 0;
}
