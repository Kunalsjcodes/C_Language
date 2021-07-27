//greater among 3 number
#include<stdio.h>
void main()
{
    unsigned long a,b,c;
    printf("Enter three numbers:\n");
    scanf("%lu%lu%lu",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("A is greater!!");
        }
        else
        {
            printf("C is greater");
        }
    }    
    else
    {
        if(b>c)
        {
            printf("B is greater");
        }
        else
        {
            printf("C is greater");
        }            
    }
}