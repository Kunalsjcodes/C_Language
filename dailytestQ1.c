/*
    01
    03 05
    07 09 11
    13 15 17 19
    21 23 25 27 29
*/

#include<stdio.h>

void main()
{
    int r,c,n=1;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            if(n<10)
            {
                printf("0%d ",n);
            }
            else
            {
                printf("%d ",n);
            }
            n=n+2;
        }
        printf("\n");
    }
}




/*
r=65                         r<=69
c=1
c=

1

*/

