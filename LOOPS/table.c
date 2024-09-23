#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Value of the n:");
    scanf("%d", &n);

    int m;
    for (int i = 1; i <= 10; i++)
    {
        m = n * i;
        printf("%d * %d -> %d\n", n, i, m);
    }

    return 0;
}