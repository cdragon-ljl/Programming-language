#include <stdio.h>

int main(void)
{
    float high = 100.0, total = 100.0, temp = 0.0;

    for(int i = 1; i <= 10; i++)
    {
        total += temp;
        high /= 2.0;
        temp = high * 2.0;
        printf("%2d -- %.3fm\n", i, total);
    }

    return 0;
}