#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, j, k;

    for(int m = 100; m <= 999; m++)
    {
        i = m / 100;
        j = m % 100 / 10;
        k = m % 100 % 10;
        if(m == pow(i, 3) + pow(j, 3) + pow(k, 3))
        {
            printf("%d ", m);
        }
    }
    printf("\n");
    
    return 0;
}