// Input and display a string.( Using %s as format specifier in scanf function & Display string using a for loop.)

#include<stdio.h> 
void main() 
{   
    int x;
    char n[20]; 
    printf("Enter a string: ");  
    scanf("%s",n);  
    for(x=0;n[x]!='\0';x++)
    {   
        printf("\nYou enter: \n%c",n[x]);  
    } 
}