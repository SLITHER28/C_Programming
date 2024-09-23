#include <stdio.h>

void reverse(int arr[], int si, int ei)
{
    int i = si;
    int j = ei;

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
    int n; // no. of terms in the array.
    printf("Enter the size of the array : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter the %d element in the array :", i + 1);
        scanf("%d", &arr[i]);
    }

    int k; // no. of times to rotate the array.
    printf("Enter the value to rotate the array : ");
    scanf("%d", &k);

    // steps
    k = k % n; //(if k is greater than the n).

    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);

    for (int i = 0; i <= n - 1; i++)
        printf("%d ", arr[i]);

    return 0;
}
