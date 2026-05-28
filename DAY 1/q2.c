#include <stdio.h>

int main()
{

    int i;
    int a;
    printf("enter the number whose table you want:");
    scanf("%d", &a);

    for (i = 1; i < 11; i++)
    {

        int d = a * i;
        printf("%d * %d = %d\n", a, i, d);
    }

    return 0;
}