#include <stdio.h>

int maze(int cr, int cc, int er, int ec) // cr , cc = current row , column   // er , ec = ending row , column.
{
    int rightWays = 0;
    int downWays = 0;
    if (cr == er && cc == ec)
        return 1; // return 1 signifies 1 way.

    if (cr == er) // only rightways call.
    {
        rightWays += maze(cr, cc + 1, er, ec);
    }
    if (cc == ec) // only downwards call.
    {
        downWays += maze(cr + 1, cc, er, ec);
    }
    if (cr < er && cc < ec)
    {
        rightWays += maze(cr, cc + 1, er, ec);
        downWays += maze(cr + 1, cc, er, ec);
    }

    int totalWays = rightWays + downWays;
    return totalWays;
}

int main()
{
    int n;
    printf("Enter the no. of rows of the maze :");
    scanf("%d", &n);

    int m;
    printf("Enter the no. of the columns of the maze :");
    scanf("%d", &m);

    int noOfWays = maze(1, 1, n, m);

    printf("%d", noOfWays);

    return 0;
}
