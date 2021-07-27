/*
            A
          B B
        C C C
      D D D D 
    E E E E E
*/

#include<stdio.h>
void main()
{
    int r,c;
    for(r=65;r<=69;r++)
    {
        for(c=69;c>=r;c--)
        {
            printf("  ");
        }
        
        for(c=r;c>=65;c--)
        {
            printf("%c ",r);
        }
        
        printf("\n");
    }   
}
