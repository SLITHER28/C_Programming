#include <stdio.h>

void sum(int x, int s)
{
    if (x == 0)
    {
        printf("%d", s);
        return;
    }
    sum(x - 1, s + x);
    return;
}

int main()
{
    int n;
    printf("Enter the value of the n : ");
    scanf("%d", &n);

    sum(n, 0);

    return 0;
}
