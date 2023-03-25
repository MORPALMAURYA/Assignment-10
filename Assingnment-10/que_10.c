// Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include <stdio.h>

void print_prime_factors(int n)
{
    int i;

    // Check for factor of 2
    while (n % 2 == 0)
    {
        printf("2 ");
        n /= 2;
    }

    // Check for factors greater than 2
    for (i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
        }
    }

    // If n is a prime greater than 2
    if (n > 2)
    {
        printf("%d ", n);
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime factors of %d: ", n);
    print_prime_factors(n);
    printf("\n");

    return 0;
}
