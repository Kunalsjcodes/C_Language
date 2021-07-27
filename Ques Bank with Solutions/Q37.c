/*
A
A B
A B C 
A B C D
A B C D E
*/

#include<stdio.h>

void main()
{
    int r,c;
    for(r=65;r<=69;r++)
    {
        for(c=65;c<=r;c++)
        {
            printf("%c ",c);
        }
        printf("\n");
    }
}