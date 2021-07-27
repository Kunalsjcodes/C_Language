// 1, 1.1, 1.2, 1.3, ...... 2

#include<stdio.h>
void main()
{
    float n;
    for(n=1.1; n<=2.0; n=n+0.1)
    {
        printf("\t%.1f",n);
    }

}