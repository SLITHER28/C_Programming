#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array :");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter the %d element in the array :", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
