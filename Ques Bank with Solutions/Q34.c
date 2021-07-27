/*
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
*/

#include<stdio.h>

void main()
{
    int r,c,x=65;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=5;c++)
        {
            printf("%c ",x);
            x++;
        }
        printf("\n");
    }
}