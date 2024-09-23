#include<stdio.h>

int main()
{
    int x , y;
    printf("Enter the value of the x :\t");
    scanf("%d", &x);

    printf("Enter the value of the y :\t");
    scanf("%d", &y);

    if(x == 0 && y == 0)
    printf("It is the origin.");

    else if(x == 0)
    printf("It lies on the y - axis.");

    else if(y == 0)
    printf("It lies on the x - axis");

    else
    printf("Not");

return 0;
}