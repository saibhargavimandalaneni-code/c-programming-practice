
#include <stdio.h>

int main()
{
    int n, original, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Not a palindrome\n");
        return 0;
    }

    original = n;

    while (n > 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (original == reverse)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
