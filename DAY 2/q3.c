#include <stdio.h>

int main(){
    int n;
    int d;
    int multiply=1;

    printf("enter the number:");
    scanf("%d",&n);
    int i=n;

    while (n>0)
    {
        d=n%10;
        multiply=multiply*d;
        n=n/10;
    }

    printf("multiplication of digits of %d is %d.",i,multiply);
    
    
    
    return 0;
}