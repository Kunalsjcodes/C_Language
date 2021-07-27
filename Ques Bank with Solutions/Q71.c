//Input and display a string.(Input and display a string using format specifier %s in scanf and printf function.)

#include<stdio.h>
void main() 
{  
    char n[20];
    int x;  
    printf("Enter a string: ");  
    scanf("%s",n);  
    printf("You enter: %s",n);  
}