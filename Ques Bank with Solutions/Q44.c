/*
              1
            2 2
          3 3 3
        4 4 4 4
      5 5 5 5 5
*/

#include<stdio.h>
void main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=5;c>=r;c--)
        {
            printf("  ");
        }
        
        for(c=r;c>=1;c--)
        {
            printf("%d ",r);
        }
        
        printf("\n");
    }   
}
