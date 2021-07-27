/*
01 02 03 04 05
06 07 08 09 10
11 12 13 14 15
*/

#include<stdio.h>

void main()
{
    int r,c,x=1;
    for(r=1;r<=3;r++)
    {
        for(c=1;c<=5;c++)
        {
            if(x<10)
                printf("0%d ",x);
            else
            {
                printf("%d ",x);

            }
            
            x++;
        }
        printf("\n");
    }
}