#include <stdio.h>

int main()
{
    int angle1, angle2, angle3;

    printf("Enter first angle of the triangle: ");
    scanf("%d", &angle1);

    printf("Enter second angle of the triangle: ");
    scanf("%d", &angle2);

    angle3 = 180 - angle1 - angle2;

    printf("Third angle of the triangle = %d degrees\n", angle3);

    return 0;
}
