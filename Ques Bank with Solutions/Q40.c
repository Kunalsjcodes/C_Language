/*
r1             A
r2            A B
r3           A B C
r4          A B C D
r5         A B C D E
*/


#include<stdio.h>
void main()
{
    int r,c;
    for(r=65;r<=69;r++)
    {
        for(c=69;c>=r;c--)
        {
            printf(" ");
        }
        
        for(c=65;c<=r;c++)
        {
            printf("%c ",c);
        }  
        printf("\n");
    }   
}
