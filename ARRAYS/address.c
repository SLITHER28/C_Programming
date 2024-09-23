#include <stdio.h>

int main()
{
    int arr[10] = {2, 4, 6, 8, 9, 4, 6, 33, 55, 66};

    for (int i = 0; i <= 9; i++)
    {
        printf("%p\n", &arr[i]);
    }
    return 0;
}