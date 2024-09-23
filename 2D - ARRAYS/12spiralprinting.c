#include <stdio.h>

int main()
{
    int m;
    printf("Enter the no. of the rows of the matrix : ");
    scanf("%d", &m);

    int n;
    printf("Enter the no. of the columns of the matrix : ");
    scanf("%d", &n);

    printf("\n");

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements at the a[%d][%d] position : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // SPIRAL PRINT.

    int minr = 0;
    int maxr = m - 1;
    int minc = 0;
    int maxc = n - 1;
    int tne = m * n; // tne = total no. of elements.
    int count = 0;

    while (count < tne)
    {
        // Print the minimum row.
        for (int j = minc; j <= maxc && count < tne; j++)
        {
            printf("%d ", arr[minr][j]);
            count++;
        }
        minr++;
        if (count >= tne)
            break;

        // Print the maximum column.
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            printf("%d ", arr[i][maxc]);
            count++;
        }
        maxc--;
        if (count >= tne)
            break;

        // Print the maximum row.
        for (int j = maxc; j >= minc && count < tne; j--)
        {
            printf("%d ", arr[maxr][j]);
            count++;
        }
        maxr--;
        if (count >= tne)
            break;

        // Print the minimum column.
        for (int i = maxr; i >= minr && count < tne; i--)
        {
            printf("%d ", arr[maxr][minc]);
            count++;
        }
        minc++;
        if (count >= tne)
            break;
    }

    return 0;
}