#include<stdio.h>
void main()
{
    int i=1;
    hi:
    if(i<=10)
    {
        printf("\n%d: Hello",i++);
        goto hi;
    }
}