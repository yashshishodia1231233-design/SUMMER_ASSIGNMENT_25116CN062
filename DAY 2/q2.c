#include <stdio.h>

int main()
{
    int n;
    int reverse = 0;
    int d;

    printf("enter the numbere to be reversed:");
    scanf("%d", &n);
    int i = n;

    while (n > 0)
    {
        d = n % 10;
        reverse = reverse * 10 + d;

        n = n / 10;
    }

    printf("reverse of %d is %d.", i, reverse);

    return 0;
}