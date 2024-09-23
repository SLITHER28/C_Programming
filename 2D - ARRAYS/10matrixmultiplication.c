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

    int p;
    printf("Enter the no. of the rows for the 2nd matrix :");
    scanf("%d", &p);

    int q;
    printf("Enter the no. of the columns for the 2nd matrix :");
    scanf("%d", &q);

    printf("Enter the elements in the second matrix :\n");

    int brr[p][q];

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Enter the elements of the 2nd matrix at a[%d][%d] position : ", i + 1, j + 1);
            scanf("%d", &brr[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    if (n == p)
    {
    }

    return 0;
}