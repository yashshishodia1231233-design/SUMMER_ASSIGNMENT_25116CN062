#include <stdio.h>

int main()
{
    int n;
    int rev = 0;
    int d;

    printf("enter the number to be checked for palindrome:");
    scanf("%d", &n);

    int i = n;

    while (n > 0)
    {
        d = n % 10;
        rev = rev * 10 + d;

        n = n / 10;
    }

    if (i == rev)
    {
        printf("given number is a palindrome.");
    }

    else
    {
        printf("given number is not a palindrome.");
    }

    return 0;
}