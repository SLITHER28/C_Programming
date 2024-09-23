#include<stdio.h>
int main()
{
int sp,cp;
printf("The value of the Selling Price:\nThe value of the Cost price:\n");
scanf("%d%d", &sp , &cp);

if(sp > cp)
{
    printf("Profit");
} 
else if(sp < cp)
{
    printf("Loss");
}
else 

{
    printf("No profit , No loss");
}
return 0;
}   
