#include <stdio.h>

int main()
{
    int base, exponent, result = 1;

    printf("Enter base number: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for (int i = 1; i <= exponent; i++)
    {
        result *= base;
    }

    printf("%d ^ %d = %d\n", base, exponent, result);

    return 0;
}
