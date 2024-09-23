#include <stdio.h>

// void Greeting(int x)
// {
//     if (x == 0)
//         return;

//     printf("Good Morning\n");
//     Greeting(x - 1);

//     return;
// }

// int main()
// {
//     int n;
//     printf("Enter the value of the n : ");
//     scanf("%d", &n);

//     Greeting(n);

//     return 0;
// }

void Decreasing(int x)
{
    if (x == 0)
        return;

    printf("%d\n", x);
    Decreasing(x - 1);

    return;
}

int main()
{
    int n;
    printf("Enter the value of the n : ");
    scanf("%d", &n);

    Decreasing(n);

    return 0;
}