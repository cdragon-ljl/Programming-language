#include <stdio.h>

int main(void)
{
    int m, n, temp;
    int gcd;

    printf("Please input two numbers:");
    scanf("%d %d", &m, &n);

    temp = m > n ? n : m;
    for(int i = temp; i > 0; i--)
    {
        gcd = i;
        if((m % i == 0) && (n % i == 0))
            break;
    }

    printf("Greatest Common Divisor is : %d\n", gcd);
    printf("Least   Common Multiple is : %d\n", m * n / gcd);

    return 0;
}