#include <stdio.h>

int main()
{
    float cm, m, km;

    printf("Enter length in centimeters: ");
    scanf("%f", &cm);

    m = cm / 100.0;
    km = cm / 100000.0;

    printf("Length in meters: %f m\n", m);
    printf("Length in kilometers: %f km\n", km);

    return 0;
}
