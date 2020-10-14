#include <stdio.h>

int main(void)
{
    char c;
    int english_count=0, space_count=0, number_count=0, others_count=0;

    while((c = getchar()) != '\n')
    {
        if(' ' == c)
        {
            space_count++;
        }
        else if(c >= '0' && c <= '9')
        {
            number_count++;
        }
        else if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
        {
            english_count++;
        }
        else
        {
            others_count++;
        }
    }

    printf("english\tspace\tnumber\tothers\n");
    printf("%d\t%d\t%d\t%d\n", english_count, space_count, number_count, others_count);

    return 0;
}