#include <stdio.h>

void england()
{
    printf("You are in England\n");
    return;
}

void australia()
{
    printf("You are in Australia\n");
    england(); // Calling England.
    return;
}

void india()
{
    printf("You are in India\n");
    australia(); // Calling Australia.
    return;
}

int main()
{
    india(); // Calling India.
    return 0;
}