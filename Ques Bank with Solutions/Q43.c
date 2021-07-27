/*
    5 4 3 2 1
    5 4 3 2 
    5 4 3 
    5 4 
    5 

*/


#include<stdio.h>
void main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=5;c>=r;c--)
        {
            printf("%d ",c);
        }
        printf("\n");    
    }
}

/*  dry run
5 4 3 2 1
5 4 3 2
5 4 3
5 4 
5
r=1                       r<=5
c=5,4,3,2,1,0
c=5,4,3,2,1
c=5,4,3,2
c=5,4,3
c=5,4
*/