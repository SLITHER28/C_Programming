#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of the a :\n");
    scanf("%d", &a);

    int b;
    printf("Enter the value of the b :\n");
    scanf("%d", &b);

    int power = 1;
    for (int i = 1; i <= b; i++)
    {
        power = power * a;
    }

    printf("The power of %d to the %d is : %d", a, b, power);

    return 0;
}