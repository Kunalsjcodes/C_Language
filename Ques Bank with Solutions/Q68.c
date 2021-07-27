//WAP to describe pointers.

#include<stdio.h>
void main()
{
    int a,*p;
    printf("Enter a number for variable a: ");
    scanf("%d",&a);  
    p=&a;  
    printf("The value of a is: %d",a);  
    printf("\nThe address of a is: %u",&a);   
    printf("\n The value of p(holds the address of a) is: %u",p);   
    printf("\n The address of p is: %u",&p);   
    printf("\n The value of *p(value on address that holds by p) is: %d",*p);
}