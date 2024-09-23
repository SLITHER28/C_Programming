#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of the rows :");
    scanf("%d", &n);

    int m;
    printf("Enter the value of the columns :");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++) // outer loop denotes the no. of the lines or the no. of the rows.
    {
        for (int i = 1; i <= m; i++) // inner loop denotes the no. of the columns or no. of stars in the each line.
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}