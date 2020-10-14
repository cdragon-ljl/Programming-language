#include <stdio.h>

int main(void)
{
    int n, sum=0, mul=1;

    printf("Please input n:");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            mul *= j;
        }
        sum += mul;
        printf("%d!", i);
        mul = 1;
        if(i < n)
        {
            printf(" + ");
        }
    }

    printf(" = %d\n", sum);
}