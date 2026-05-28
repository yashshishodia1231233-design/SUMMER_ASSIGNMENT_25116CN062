#include <stdio.h>

int main()
{
    int n;
    int i;
    int count = 0;
    printf("enter the number:");
    scanf("%d", &n);
    i = n;

    while (n > 0)
    {
        n = n / 10;
        count++;
    }

    printf("number of digits in %d is %d.", i, count);

    return 0;
}