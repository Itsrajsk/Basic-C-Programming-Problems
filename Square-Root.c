#include <stdio.h>
#include <math.h>

int main()
{
    double number, sqrt_result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    sqrt_result = sqrt(number);

    printf("Square root of %.2lf = %.2lf\n", number, sqrt_result);

    return 0;
}
