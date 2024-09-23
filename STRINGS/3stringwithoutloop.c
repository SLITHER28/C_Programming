#include <stdio.h>
#include <string.h>

int main()
{
    // char str[] = "Dune 2 is the best sci-fi film ever made.";

    // printf("%s", str);

    puts("Hello Everyone.");

    char str[40];

    scanf("%[^\n]s", str); // only the first word will be considered.

    // gets(str); // can takes an entire sentence as the output.
    printf("Your input is : %s", str);

    return 0;
}