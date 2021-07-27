/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/

#include<stdio.h>

void main()
{
    int r,c;
    for(r=0;r<4;r++)
    {
        for(c=1;c<=5;c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
}