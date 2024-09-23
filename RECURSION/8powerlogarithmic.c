#include <stdio.h>

int powerlog(int x, int y)
{
    if (y == 0)
        return 1;

    int a = powerlog(x, y / 2);

    if (y % 2 == 0) // EVEN
    {
        return a * a;
    }
    else // ODD
    {
        return a * a * x;
    }
}

int main()
{
    int a;
    printf("Enter the base : ");

    scanf("%d", &a);

    int b;
    printf("Enter the power : ");
    scanf("%d", &b);

    int p = powerlog(a, b);

    printf("%d raised to the power %d is\n%d", a, b, p);

    return 0;
}