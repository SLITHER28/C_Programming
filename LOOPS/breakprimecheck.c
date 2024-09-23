#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of the n :");
    scanf("%d", &n);

    int a = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            a = 1;
            break;
        }
    }
    if (n == 1)

        printf("1 is neither prime nor composite.");
    else if (a == 0)
        printf("The given number is prime.\n");
    else
        printf("The given number is Composite");

    return 0;
}