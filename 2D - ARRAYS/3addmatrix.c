#include <stdio.h>

int main()
{
    int arr[2][2] = {1, 2, 3, 4};
    int brr[2][2] = {5, 6, 7, 8};

    int result[2][2];
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = arr[i][j] + brr[i][j];
            printf("%d ", result[i][j]);
            sum = sum + result[i][j];
        }

        printf("\n");
    }

    printf("\n");
    printf("The sum of the given matrix is the :%d", sum);

    return 0;
}