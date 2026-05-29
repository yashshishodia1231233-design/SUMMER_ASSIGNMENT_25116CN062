#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    int d;
    printf("enter the number:");
    scanf("%d", &n);
    int a = n;
    while (n > 0)
    {
        d = n % 10;
        n = n / 10;

        sum = sum + d;
    }
    printf("sum of digits of %d is %d", a, sum);

    return 0;
}