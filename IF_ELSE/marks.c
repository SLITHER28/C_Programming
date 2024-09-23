#include<stdio.h>

 int main()
{
    int n;
    printf("Enter percentage : ");
    scanf("%d", &n);
    // more than 80 is A
    // more than 60 is B
    // more than 40 is C
    // less than 40 is D

    // if(n > 80)
    // {
    // printf("Grade A\n");
    // }
    // else if(n > 60)
    // {
    // printf("Grade B\n");    
    // }
    // else if(n > 40)
    // {
    // printf("Grade C\n");   
    // }
    // else
    // {
    // printf("Grade D");   
    // }

    if(n > 80)
    {
    printf("Grade A\n");
    }
    else 
    {
       if(n > 60)
       {
       printf("Grade B\n"); 
       }
    else 
    {
        if(n > 40)
       {
            printf("Grade C\n");
        }
    else 
    {
        printf("Grade D");
    }
    }
    }
    return 0;
}