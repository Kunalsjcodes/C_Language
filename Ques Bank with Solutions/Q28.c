/*
E E E E E
D D D D D
C C C C C
B B B B B 
A A A A A
*/

#include<stdio.h>

void main()
{
    int r,c;
    for(r=69;r>=65;r--)
    {
        for(c=0;c<=4;c++)
        {
            printf("%C",r);
        }
        printf("\n");
    }
}