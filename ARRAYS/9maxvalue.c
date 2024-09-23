#include <stdio.h>

int main()
{
    int arr[7] = {-3, 45, 34, 79, -89, 56, 45};

    int max = arr[0];
    for (int i = 1; i <= 6; i++)
    {

        if (max < arr[i])

            max = arr[i];
    }

    printf("The maximum value of the array is the : %d", max);

    return 0;
}
