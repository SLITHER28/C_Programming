#include <stdio.h>

int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1; // BASE CASE

    int recAns = n * factorial(n - 1);
    return recAns;
}

int main()
{
    int n;
    printf("Enter the value of the n : ");
    scanf("%d", &n);

    int Fact;
    Fact = factorial(n);

    printf("The factorial of the %d is : %d ", n, Fact);
    return 0;
}
