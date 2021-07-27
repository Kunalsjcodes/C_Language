/*
5 5 5 5 5
4 4 4 4 4 
3 3 3 3 3
2 2 2 2 2 
1 1 1 1 1 
*/

#include<stdio.h>

void main()
{
    int r,c;
    for(r=5;r>=1;r--)
    {
        for(c=1;c<=5;c++)
        {
            printf("%d",r);
        }
        printf("\n");
    }
}