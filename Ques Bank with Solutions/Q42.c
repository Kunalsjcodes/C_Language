/*    c1
r1    5 5 5 5 5 
r2    4 4 4 4 
r3    3 3 3
r4    2 2
r5    1
*/

#include<stdio.h>
void main()
{
    int r,c;
    for(r=5;r>=1;r--)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d ",r);
        }
        printf("\n");    
    }
}