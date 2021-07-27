//WAP to input a string in upper case and display it in lower case. 

#include<stdio.h> 
void main() 
{  
    char ch[20];  
    int a;  
    printf("Enter a string in upper case: ");  
    gets(ch);  
    for(a=0;ch[a]!='\0';a++)  
    {   
        if(ch[a]>=65 && ch[a]<=90)   
        {    
            ch[a]=ch[a]+32;   
        }  
    }  
    printf("String in lower case :\n");  
    puts(ch);    
}