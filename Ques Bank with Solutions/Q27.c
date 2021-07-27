/*
A B C D E
A B C D E
A B C D E
A B C D E
*/

#include<stdio.h>

void main()
{
    int r,c;
    for(r=0;r<4;r++)
    {
        for(c=65;c<=69;c++)
        {
            printf("%C",c);
        }
        printf("\n");
    }
}