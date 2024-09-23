#include <stdio.h>

int main()
{
    int marks[10] = {10, 50, 11, 70, 4, 60, 23, 80, 1, 67};

    for (int i = 0; i <= 9; i++)
    {
        if (marks[i] < 35)
            printf("%d ", i);
    }

    return 0;
}
