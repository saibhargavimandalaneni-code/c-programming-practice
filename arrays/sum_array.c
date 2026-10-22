
#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    int arr[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Enter a size between 1 and 100.\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
