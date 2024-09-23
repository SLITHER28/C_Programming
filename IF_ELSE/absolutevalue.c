#include<stdio.h>

int main()
{
int n;
printf("Enter the value of n :\n");
scanf("%d",&n);
    
if (n < 0) 
{
n = n * (-1); 
printf("The absolute vlue is : %d", n);
}


return 0;

}