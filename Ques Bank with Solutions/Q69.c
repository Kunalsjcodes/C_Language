//WAP to describe single pointers and double pointers.

#include<stdio.h> 
void main() 
{  
    int a,*p,**q;  
    printf("Enter a number for variable a: ");  
    scanf("%d",&a);  
    p=&a;  
    q=&p;  
    printf("The value of a is: %d",a);  
    printf("\nThe address of a is: %u",&a);   
    printf("\nThe value of p(holds the address of a) is: %u",p);   
    printf("\nThe address of p is: %u",&p);   
    printf("\nThe value of *p(value on address that holds by p) is: %d",*p);  
    printf("\nThe value of q(holds the address of p) is: %u",q);  
    printf("\nThe value of *q(value on address that holds by q) is: %d",*q);  
    printf("\nValue of **q is the address of p as (value of address that p holds) is:  %d",**q);
} 