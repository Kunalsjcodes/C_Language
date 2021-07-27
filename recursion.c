#include<stdio.h>

void loop(int n)
{
    if(n<10)
    {   

        printf("\n%d",n);
        n++;
        loop(n);
    }
}

void main()
{
    int n=1;
    loop(n);
}