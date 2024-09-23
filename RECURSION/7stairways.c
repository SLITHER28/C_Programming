#include <stdio.h>

int stair(int x) // ONE OR TWO STEPS AT A TIME.
{
    if (x == 1 || x == 2)
        return x;

    int TotalWays = stair(x - 1) + stair(x - 2);
    return TotalWays;
}

int main()
{
    int n;
    printf("Enter the value of the n :");
    scanf("%d", &n);

    int ways = stair(n);
    printf("%d", ways);

    return 0;
}
