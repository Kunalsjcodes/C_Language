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
        for(c=65;c<=r;c++)
        {
            printf("%c ",r);
        }
        printf("\n");
    }
}



/*
A
B A
C B A
D C B A
E D C B A
*/

/*
#include<stdio.h>
void main()
{
    int r,c;
    for(r=65;r<=69;r++)
    {
        for(c=r;c>=65;c--)
        {
            printf("%c ",c);
        }
        printf("\n");
    }
}
*/
