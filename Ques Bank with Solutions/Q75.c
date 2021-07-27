//WAP to input a string and count total number of characters with white space.

#include<stdio.h> 
void main() 
{  
    char ch[20];  
    int a,count=0;
    printf("Enter a string: ");  
    gets(ch);  
    for(a=0;ch[a]!='\0';a++)  
    {   
        count=count+1;  
    }  
    printf("Total characters are: %d in - ",count);  
    puts(ch);    
} 