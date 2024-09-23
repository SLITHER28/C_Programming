#include <stdio.h>

int power(int x, int y)
{
    // int z = 1;
    // for (int i = 1; i <= y; i++)
    // {
    //     z = z * x;
    // }
    // return z;

    if (y == 0)
        return 1;

    int recAns = x * power(x, y - 1);
    return recAns;
}

int main()
{
    int a;
    printf("Enter the base : ");
    scanf("%d", &a);

    int b;
    printf("Enter the power : ");
    scanf("%d", &b);

    int p = power(a, b);

    printf("%d raised to the power %d is\n%d", a, b, p);
}