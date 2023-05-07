#include <stdio.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
    {
        printf("%c is an uppercase character.\n", c);
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("%c is a lowercase character.\n", c);
    }
    else
    {
        printf("%c is a special character.\n", c);
    }

    return 0;
}
