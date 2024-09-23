#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of the n :");
    scanf("%d", &n);

    int nst = 1; // nst = no. of the stars.
    int nsp = 3; // nsp = no. of the spaces.

    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        nsp = nsp - 1;

        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        nst = nst + 2;
        printf("\n");
    }
    return 0;
}