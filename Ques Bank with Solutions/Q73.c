//WAP to input a string in lower case and display it in upper case. 

#include<stdio.h> 
void main() 
{  
    char ch[20];  
    int a;  
    printf("Enter a string in lower case: ");  
    gets(ch);  
    for(a=0;ch[a]!='\0';a++)  
    {   
        if(ch[a]>=97 && ch[a]<=122)   
        {    
            ch[a]=ch[a]-32;   
        }  
    }  
    printf("String in upper case :\n");  
    puts(ch);
} 