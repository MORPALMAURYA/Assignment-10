// Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)

#include <stdio.h>

int combinations(int n, int r)
{
    int i, numerator = 1, denominator = 1;

    for (i = 1; i <= r; i++)
    {
        numerator *= (n - i + 1);
        denominator *= i;
    }

    return numerator / denominator;
}

int main()
{
    int n, r;

    printf("Enter the value of n and r: ");
    scanf("%d %d", &n, &r);

    printf("Number of combinations from %d items taking %d at a time is %d\n", n, r, combinations(n, r));

    return 0;
}
