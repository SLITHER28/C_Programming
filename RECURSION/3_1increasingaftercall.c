#include <stdio.h>

Increasing(int x)
{
    if (x == 0) // Base Case
        return;

    Increasing(x - 1); // Call
    printf("%d\n", x); // Code

    return;
}

int main()
{
    int n;
    printf("Enter the value of the n : ");
    scanf("%d", &n);

    Increasing(n);

    return 0;
}