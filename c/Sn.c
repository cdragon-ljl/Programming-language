#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, n, sum=0, temp, *na;

    printf("Please input a n:");
    scanf("%d %d", &a, &n);

    na = (int *)malloc(sizeof(int) * n);
    temp = a;
    for(int i = 0; i < n; i++)
    {
        *(na+i) = temp;
        sum += temp;
        temp *= 10;
        temp += a;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d", *(na+i));
        if(i < n-1)
        {
            printf(" + ");
        }
    }
    printf(" = %d\n", sum);

    free(na);

    return 0;
}