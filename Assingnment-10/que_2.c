// Write a function to calculate simple interest. (TSRS)
#include <stdio.h>

float calculate_simple_interest(float principal, float rate, float time)
{
    float interest;

    interest = (principal * rate * time) / 100;

    return interest;
}

int main()
{
    float principal, rate, time, interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    interest = calculate_simple_interest(principal, rate, time);

    printf("The simple interest is %.2f", interest);

    return 0;
}
