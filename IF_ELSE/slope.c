#include<stdio.h>

int main()
{
    float x1,y1,x2,y2,x3,y3,m1,m2;
    m1 = (y2 - y1)/(x2 - x1);
    m2 = (y3 - y2)/(x3 - x2);
    printf("Enter the value of the x1 and y1 :\nEnter the value of the x2 and y2 :\nEnter the value of the x3 and y3 :\n");
    scanf("%f%f%f%f%f%f", &x1 ,&y1 ,&x2 ,&y2 ,&x3 ,&y3);

    m1 = (y2 - y1)/(x2 - x1);
    m2 = (y3 - y2)/(x3 - x2);

    printf("%f\n%f\n", m1,m2);

    if(m1 == m2)
    {
        printf("All the three points lies on the straight line.");
    }
    else
    {
        printf("All the three points not lies on the straight line.");
    }
    return 0;
}