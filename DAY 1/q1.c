#include <stdio.h>

int main()
{

    int sum = 0;
    int i;
    int n;
    printf("enter the number to which you want the sum of all the natural numbers:");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("sum of all natural numbers till %d is %d", n, sum);

    return 0;
}
