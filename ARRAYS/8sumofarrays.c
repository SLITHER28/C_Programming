#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);

    return 0;
}