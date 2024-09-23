#include <stdio.h>

int main()
{
    int arr[10];

    for (int i = 0; i <= 9; i++)
    {
        printf("Enter the %d element :\n", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 9; i >= 0; i--)
    {
        printf("The value of the %d is : %d\n", i + 1, arr[i]);
    }

    return 0;
}