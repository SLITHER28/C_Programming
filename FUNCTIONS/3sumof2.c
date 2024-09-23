#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a;
    printf("Enter the first value :");
    scanf("%d", &a);

    int b;
    printf("Enter the second value :");
    scanf("%d", &b);

    int sum = add(a, b);
    printf("%d", sum);

    return 0;
}