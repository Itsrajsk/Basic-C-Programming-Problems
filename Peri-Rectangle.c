// C Program to Enter Length and Breadth of a Rectangle and Find its Perimeter
#include <stdio.h>

int main()
{
    float l, w, p;

    printf("Enter the length & width of the rectangle::\n");
    scanf("%f", &l);
    scanf("%f", &w);

    // Calculate perimeter of rectangle
    p = 2 * (l + w);

    // It will print the final output
    printf("\nThe Perimeter of rectangle = %f units ", p);
    return 0;
}