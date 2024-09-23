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

    int sumeven = 0;
    int sumodd = 0;

    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] % 2 == 0)
            sumeven = sumeven + arr[i];

        else
            sumodd = sumodd + arr[i];
    }

    int difference = sumeven - sumodd;

    printf("%d", difference);

    return 0;
}