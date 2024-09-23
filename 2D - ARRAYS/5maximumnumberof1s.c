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
    int maxcount = 0;
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
        int count = 0;
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 1)
            {
                count = count + 1;
            }
        }
        if (maxcount < count)
        {
            maxcount = count;
            idx = i;
        }
    }

    printf("The max. no. of the zeroes and ones is %d and the index of the row is %d.", maxcount, idx);

    return 0;
}