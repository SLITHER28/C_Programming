#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of the n :");
    scanf("%d", &n);

    // 4 , 7 , 10 , 13.

    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", a);
        a = a + 3;
    }

    return 0;
}