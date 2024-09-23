#include <stdio.h>

int main()
{

    int a = 7;
    int *x = &a;
    int *y = &x;

    printf("%p\n", &x);
    printf("%p", &y);

    return 0;
}
