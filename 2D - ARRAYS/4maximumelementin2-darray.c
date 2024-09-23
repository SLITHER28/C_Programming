#include <stdio.h>
#include <limits.h>

int main()
{
    int r;
    printf("Enter the no. of the rows :");
    scanf("%d", &r);

    int c;
    printf("Enter the no. of the columns :");
    scanf("%d", &c);

    int arr[r][c];
    int max = INT_MIN;
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

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }

    printf("The sum is %d and the maximum valued element is %d.", sum, max);

    return 0;
}
