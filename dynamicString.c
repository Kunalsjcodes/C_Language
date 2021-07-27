#include<stdio.h>
void main()
{
    char n[22], *m;
    printf("\n\n*Enter your name: ");
    gets(m);
    printf("\nName[m]: %s\t\tSize: %d Bytes",m,sizeof(m));

    printf("\nEnter your name: ");
    gets(n);
    printf("\nName[n]: %s\t\tSize: %d Bytes",n,sizeof(n));
    

}