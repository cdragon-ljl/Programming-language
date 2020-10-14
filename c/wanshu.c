#include <stdio.h>

int main(void)
{
    int n, sum;

    for(n = 1; n < 1000; n++)
    {
        sum = 0;
        for(int i = 1; i < n; i++)
        {
            if(0 == n % i)
            {
                sum += i;
            }
        }
        if(sum == n)
        {
            printf("%d its factors are ", n);
            for(int i = 1; i < n; i++)
            {
                if(0 == n % i)
                {
                    printf("%d ", i);
                }
            }
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}