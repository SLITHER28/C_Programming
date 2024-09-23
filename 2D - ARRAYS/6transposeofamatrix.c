#include <stdio.h>

int main()
{
    int r;
    printf("Enter the no. of the rows :");
    scanf("%d", &r);

    int c;
    printf("Enter the no. of the columns :");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter the elements of the 2-D array :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter elements [%d][%d] : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }

    printf("\n");
    // for (int i = 0; i < c; i++)
    // {
    //     for (int j = 0; j < r; j++)
    //     {
    //         printf("%d ", arr[j][i]);
    //     }
    //     printf("\n");
    // }

    int brr[c][r];

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
