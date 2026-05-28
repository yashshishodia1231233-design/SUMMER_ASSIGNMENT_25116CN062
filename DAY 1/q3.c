#include <stdio.h>

int main()
{

    int i;
    int n;
    printf("enter the number whose factorial you desire:");
    scanf("%d", &n);

    int fact = 1;

    if (n == 0)
    {
        printf("factorial of 0 is 1.");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {

            fact = fact * i;
        }

        printf("factorial of %d is %d.", n, fact);
    }

    return 0;
}