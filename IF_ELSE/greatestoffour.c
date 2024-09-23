#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter the value of a:\nEnter the value of b:\nEnter the value of c:\nEnter the value of d:\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest of the four.", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d is the greatest of the four.", b);
    }
    if (c > a && c > b && c > d)
    {
        printf("%d is the greatest of the four.", c);
    }
    if (d > a && d > b && d > c)
    {
        printf("%d is the greatest of the four.", d);
    }
    return 0;
}