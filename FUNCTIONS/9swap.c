#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of the a :");
    scanf("%d", &a);

    int b;
    printf("Enter the value of the b :");
    scanf("%d", &b);

    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After swapping the value of the new a is : %d\n", a);
    printf("After swapping the value of the new b is : %d", b);

    return 0;
}
