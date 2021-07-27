#include<stdio.h>
/* void main()
{
    char c[100];
    int i;
    printf("Enter your name: ");
    scanf("%[^\t]",c);
    printf("\nYour name: ");
    // for(i=0;i<10;i++)
    // {
    //     printf("%c",c[i]);
    // } 
    // printf("%s",c);
    printf("%s",c);
} 
*/

void main()
{
    char c[100];
    int i;
    printf("Enter your name: ");
    gets(c);
    printf("\nYour name: ");
    puts(c);
 }