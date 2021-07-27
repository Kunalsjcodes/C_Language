#include <stdio.h>
void main()
{
    int i = 1;
    while (i < 10)
    {
        if (i == 2)
        {
            continue;
        }
        printf("Hello\t");
        printf("\n%d: Hello", i);
        i++;
    }
}