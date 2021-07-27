//WAP to input a string using gets() function and display it using puts() function. 

#include<stdio.h> 
void main() 
{  
    char ch[20];  
    printf("Enter a string: ");  
    gets(ch);  
    printf("String is: ");  
    puts(ch);    
}    