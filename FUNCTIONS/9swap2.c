// Without using the third variable.

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of the a :");
    scanf("%d", &a);

    int b;
    printf("Enter the value of the b :");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping the value of the new a is : %d\n", a);
    printf("After swapping the value of the new b is : %d", b);

    return 0;
}
