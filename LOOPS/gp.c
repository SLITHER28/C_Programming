#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of the n :");
    scanf("%d", &n);

    // 1 , 2 , 4 , 8 , 16 , 32.

    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", a);
        a = a * 2;
    }

    return 0;
}
