// Write a function to calculate the area of a circle. (TSRS)

#include <stdio.h>

float calculate_area(float radius)
{
    float area;

    area = 3.14159 * radius * radius;

    return area;
}

int main()
{
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = calculate_area(radius);

    printf("The area of the circle with radius %.2f is %.2f", radius, area);

    return 0;
}
