#include <stdio.h>

int main()
{
    int r;
    printf("Enter the no. of the rows :");
    scanf("%d", &r);

    int c;
    printf("Enter the no. of the columns :\n%d\n", r);

    c = r;
    int arr[r][r];

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

    // Transpose.
    for (int i = 0; i < r; i++)
    {
        for (int j = i; j < c; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    printf("TRANSPOSE :\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // ROTATE.

    for (int i = 0; i < r; i++)
    {
        int j = 0;
        int k = r - 1;

        while (j < k)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][k];
            arr[i][k] = temp;

            j++;
            k--;
        }
    }

    printf("\n");

    // Output
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}