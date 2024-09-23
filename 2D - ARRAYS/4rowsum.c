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
    int maxsum = INT_MIN;
    int idx = 0;

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            printf("Enter the element at a[%d][%d] position : ", i + 1, j + 1);
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

    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
            sum = sum + arr[i][j];

            if (maxsum < sum)
            {
                maxsum = sum;
                idx = i;
            }
        }
        printf("\n");
        printf("Sum of the row is : %d\n", sum);
    }

    printf("The row with the maximum sum is %d and its Sum is %d", idx, maxsum);

    return 0;
}
