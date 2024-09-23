#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x;

    printf("Enter the value of the x :");
    scanf("%d", &x);

    int n;
    printf("Enter the size of the aray :");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter the %d element in the array :", i + 1);
        scanf("%d", &arr[i]);
    }

    bool flag = false; // False means that the element is not present.
    int idx = -1;

    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == x)
        {
            flag = true; // True means present in the array.
            idx = i;
            break;
        }
    }

    if (flag == false)
    {
        printf("%d is not present in the array.", x);
    }
    else
    {
        printf("%d is present in the array and its index is %d.", x, idx);
    }
    return 0;
}