#include <stdio.h>

void reverse(int arr[], int n)
{

    int i = 0;
    int j = n - 1;

    while (i < j)
    {

        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
    return;
}

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

    reverse(arr, n);

    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}