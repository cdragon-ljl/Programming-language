#include <stdio.h>

int main(void)
{
    int total = 1;

    printf("There are %4d peachs left on the 1 day\n", total);
    for(int i = 9; i >= 1; i--)
    {
        total = (total + 1) * 2;
        printf("There are %4d peachs left on the %d day\n", total, i);
    }
    
    return 0;
}