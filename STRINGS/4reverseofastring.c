#include <stdio.h>
#include <string.h>

int main()
{
    char str[40];

    puts("Enter a string");
    gets(str);
    puts("The size of a string is the :");

    // size of a string.

    int size = 0;
    int k = 0;

    while (str[k] != '\0')
    {
        size++;
        k++;
    }

    printf("%d\n", size);
    puts("The reverse of the string is :");

    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    puts(str);

    return 0;
}