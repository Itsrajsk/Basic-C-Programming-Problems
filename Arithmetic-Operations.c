
/**
 * C program to perform all arithmetic operations
 */

#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, sub, mult, mod;
    float div;

    /*
     * Input two numbers from user
     */
    printf("Enter Any Two Numbers: \n");
    scanf("%d%d", &num1, &num2);

    /*
     * Perform all arithmetic operations
     */
    sum = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = (float)num1 / num2;
    mod = num1 % num2;

    /*
     * Print result of all arithmetic operations
     */
    printf("\nSUM = %d\n", sum);
    printf("\nDIFFERENCE = %d\n", sub);
    printf("\nPRODUCT = %d\n", mult);
    printf("\nQUOTIENT = %f\n", div);
    printf("\nMODULUS = %d\n", mod);

    return 0;
}