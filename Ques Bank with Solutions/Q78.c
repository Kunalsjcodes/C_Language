//WAP to input a string and count total words, total space, total lines and total characters. 

#include<stdio.h>
void main() 
{  
    char ch[200];  
    int a,c=0,w=0,s=0,l=1;  
    printf("Press # to stop\nEnter a string: ");  
    scanf("%[^#]",ch);  
    printf("\n%s\n",ch);
    for(a=0;ch[a]!='\0';a++)  
    {   
        if(ch[a]==' ')   
        {    
            s++;   
        }   
        if(ch[a]=='\n')   
        {    
            l++;   
        }   
    w=s+l;  
    }  
    printf("\nTotal words are: %d",w);  
    printf("\nTotal characters are: %d",a-1);  
    printf("\nTotal space are: %d",s);  
    printf("\nTotal lines are: %d",l);  
} 
 