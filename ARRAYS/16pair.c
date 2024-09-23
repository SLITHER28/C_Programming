#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array :");
    scanf("%d", &n);

    int x;
    printf("Enter the value of the x :");
    scanf("%d", &x);

    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter the %d element in the array :", i + 1);
        scanf("%d", &arr[i]);
    }

    int totalpairs = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                totalpairs++;
                printf("(%d,%d)\n", arr[i], arr[j]);
            }
        }
    }

    printf("%d", totalpairs);

    return 0;
}