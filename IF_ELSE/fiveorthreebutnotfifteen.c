#include<stdio.h>

int main()
{
int n;
printf("Enter the value of n\n");
scanf("%d",&n);

if(n%5 == 0 || n%3 == 0)
{
    if(n % 15 != 0)
    printf("It is divisible by the 5 OR 3 but not 15.");
    else
    printf("It is divisible by the 15");
}
else
{
printf("It is not divisible by 5 OR 3 OR 15");
}
return 0;
}