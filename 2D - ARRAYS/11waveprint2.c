#include <stdio.h>

int main()
{
    int m;
    printf("Enter the no. of the rows for the 1st matrix :");
    scanf("%d", &m);

    int n;
    printf("Enter the no. of the columns for the 1st matrix :");
    scanf("%d", &n);

    printf("Enter the elements in the first matrix :\n");

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements of the 1st matrix at a[%d][%d] position : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = m - 1; i >= 0; i--)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
        else
        {
            for (int i = 0; i <= m; i++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
