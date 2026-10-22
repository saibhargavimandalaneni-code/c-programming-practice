
#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a number (0-20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
    {
        printf("Please enter a number from 0 to 20.\n");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            factorial = factorial * i;
        }

        printf("Factorial = %llu\n", factorial);
    }

    return 0;
}
