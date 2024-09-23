#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[7] = {1, 2, 3, 4, 4, 2, 1};

    int max = INT_MIN;
    int smax = INT_MIN; // smax = second maximum value

    //     for (int i = 0; i <= 6; i++)
    //     {
    //         if (max < arr[i])
    //             max = arr[i];
    //     }
    //     // MAX = 79
    //     for (int i = 0; i <= 6; i++)
    //     {
    //         if (smax < arr[i] && arr[i] != max)
    //             smax = arr[i];
    //     }

    // printf("The maximum value of the array is the : %d" , max);
    //      printf("The second maximum value of the array is the : %d", smax);

    for (int i = 0; i <= 6; i++)
    {
        if (max < arr[i])
        {
            smax = max;   // smax is now previous max.
            max = arr[i]; // max is now a new max.
        }

        else if (smax < arr[i] && max != arr[i]) // max > arr[i]
            smax = arr[i];
    }

    printf("The maximum value of the array is the : %d\n", max);
    printf("The second maximum value of the array is the : %d", smax);

    return 0;
}
