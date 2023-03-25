// Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>

void print_odd_numbers(int n)
{
    int i, num = 1;

    for (i = 1; i <= n; i++)
    {
        printf("%d ", num);
        num += 2;
    }
}

int main()
{
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("The first %d odd natural numbers are: ", n);
    print_odd_numbers(n);

    return 0;
}
