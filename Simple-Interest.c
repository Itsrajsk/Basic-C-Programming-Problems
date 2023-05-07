#include <stdio.h>

int main()
{
    float principle, time, rate, simple_interest;

    printf("Enter the principle amount: ");
    scanf("%f", &principle);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    printf("Enter the rate of interest (in percentage): ");
    scanf("%f", &rate);

    simple_interest = (principle * time * rate) / 100;

    printf("Simple interest = %.2f\n", simple_interest);

    return 0;
}
