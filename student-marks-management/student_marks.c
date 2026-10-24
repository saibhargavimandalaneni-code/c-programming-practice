#include <stdio.h>

int main()
{
    int marks[5];
    int i, total = 0;
    float average;

    printf("Enter marks for 5 subjects (0-100):\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks.\n");
            return 0;
        }

        total += marks[i];
    }

    average = total / 5.0f;

    printf("Total Marks = %d\n", total);
    printf("Average Marks = %.2f\n", average);

    if (average >= 90)
        printf("Grade: A\n");
    else if (average >= 75)
        printf("Grade: B\n");
    else if (average >= 60)
        printf("Grade: C\n");
    else if (average >= 40)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}
