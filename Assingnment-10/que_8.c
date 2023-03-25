// Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time. (TSRS)
#include <stdio.h>

int arrangements(int n, int r)
{
    int i, arr = 1;

    for (i = 1; i <= r; i++)
    {
        arr *= (n - i + 1);
    }

    return arr;
}

int main()
{
    int n, r;

    printf("Enter the value of n and r: ");
    scanf("%d %d", &n, &r);

    printf("Number of arrangements from %d items taking %d at a time is %d\n", n, r, arrangements(n, r));

    return 0;
}
