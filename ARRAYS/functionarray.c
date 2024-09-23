#include <stdio.h>

void fun(int arr[])
{
    arr[0] = 19;
    return;
}

int main()
{
    int arr[5] = {1, 3, 5, 7, 9};
    printf("%d\n", arr[0]);

    fun(arr);
    printf("%d", arr[0]);

    return 0;
}