

#include <stdio.h>

int Sum(int x)
{
    if (x == 1 || x == 0)
        return x; // BASE CASE

    int sumAns = x + Sum(x - 1);
    return sumAns;
}

int main()
{
    int n;
    printf("Enter the value of the n : ");
    scanf("%d", &n);

    int Summation;
    Summation = Sum(n);

    printf("The sum of the %d terms is : %d ", n, Summation);
    return 0;
}