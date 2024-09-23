#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of the n :");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {
        sum += i;
        printf("%d\n", j);
    }
    printf("Sum is %d\n", sum);

    // printf("Sum of the first n natural numbers :\n%d\n", sum);

    // for (int i = n; i>=1; i--)
    // {
    //     printf("%d\n", i);
    // }

    return 0;
}