#include <stdio.h>
#include <math.h>

int main()
{
    float principle, time, rate, compound_interest;

    printf("Enter the principle amount: ");
    scanf("%f", &principle);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    compound_interest = principle * pow((1 + rate / 100), time) - principle;

    printf("Compound interest = %.2f\n", compound_interest);

    return 0;
}
