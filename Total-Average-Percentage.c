#include <stdio.h>

int main()
{
    float marks[5];
    float total = 0, average, percentage;

    printf("Enter the marks of five subjects:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];
    }

    average = total / 5;
    percentage = (total / 500) * 100;

    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", average);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
