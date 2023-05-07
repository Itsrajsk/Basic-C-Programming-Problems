#include <stdio.h>
#include <math.h>

int main()
{
    float side_length, area;

    printf("Enter the side length of the equilateral triangle: ");
    scanf("%f", &side_length);

    area = (sqrt(3) / 4) * side_length * side_length;

    printf("Area of the equilateral triangle = %.2f square units\n", area);

    return 0;
}
