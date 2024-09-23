#include <stdio.h>
int main()
{
    int students;
    printf("Enter the no. of the students:");
    scanf("%d", &students);

    int subjects = 3; // Rollno.   Physics   Chemistry    Mathematics.

    int arr[students][subjects];

    printf("Enter the rollno. and the marks in Physics, Chemistry and Mathematics :\n");
    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {

            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");

    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            // Roll no.   Physics    Chemistry    Maths

            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}