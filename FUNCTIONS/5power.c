#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    int b;
    printf("Enter a number : ");
    scanf("%d", &b);

    int c = pow(a, b);

    printf("\nThe value of the %d power to the %d is : \n%d", a, b, c);

    return 0;
}