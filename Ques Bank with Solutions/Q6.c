//check eligibility for voting
#include<stdio.h>
void main()
{
    int age;
    printf("enter your age");
    scanf("%d",&age);
    
    if( age>18 )
    {
        printf("eligible for voting");
    }
    else 
        printf("not eligible");
}