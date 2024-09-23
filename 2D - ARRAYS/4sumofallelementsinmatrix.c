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
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Enter the element at a[%d][%d] position : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
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

    printf("The sum of the elements of the matrix is : %d", sum);

    return 0;
}
