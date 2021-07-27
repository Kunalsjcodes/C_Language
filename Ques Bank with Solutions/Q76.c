//WAP to input a string and count total number of vowels. 

#include<stdio.h> 
void main() 
{  
    char ch[100];  
    int a,count=0;  
    printf("Enter a string: ");  
    gets(ch);  
    for(a=0;ch[a]!='\0';a++)  
    { 
        if(ch[a]=='a'|| ch[a]=='A'|| ch[a]=='e'|| ch[a]=='E'|| ch[a]=='i'|| ch[a]=='I'|| ch[a]=='o'|| ch[a]=='O'|| ch[a]=='u'|| ch[a]=='U')   
            {    
                count=count+1;   
            } 
    }  
    printf("Total vowels are: %d in - ",count);  
    puts(ch);    
}