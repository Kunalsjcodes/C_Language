#include<stdio.h>
void main()
{
    char c;
    printf("Enter a char: ");
    scanf("%c",&c);
    if(c>=65 && c<=90)
    {
        c=c+32;
    }
    else if(c>=97 && c<=122)
    {
        c=c-32;
    }
    printf("vice verca char: %c",c );
}
