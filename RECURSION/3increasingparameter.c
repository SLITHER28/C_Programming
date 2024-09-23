#include <stdio.h>

void Increasing(int x, int y) // Paramaterised Way
{
    if (x > y)
        return;

    printf("%d\n", x);
    Increasing(x + 1, y);

    return;
}

int main()
{
    int n;
    printf("Enter the value of the n : ");
    scanf("%d", &n);

    Increasing(1, n);

    return 0;
}