//NANR- all +,-,*,/,% calculation

#include<stdio.h>
void add();        
void sub();             
void mul();
void rem();
void div();


void add(void)   
{
    int a,b;
    printf("\nFor SUM\nEnter two values:\n ");
    scanf("%d%d",&a,&b);
    printf("Sum: %d\n",a+b);
}
void sub(void)   
{
    int a,b;
    printf("\nFor SUB\nEnter two values:\n ");
    scanf("%d%d",&a,&b);
    printf("Sub: %d\n",a-b);
}
void mul(void)   
{
    int a,b;
    printf("\nFor MULTIPLICATION\nEnter two values:\n ");
    scanf("%d%d",&a,&b);
    printf("Multiplication : %d\n",a*b);
}
void rem(void)   
{
    int a,b;
    printf("\nFor REMINDER\nEnter two values:\n ");
    scanf("%d%d",&a,&b);
    printf("Reminder: %d\n",a%b);
}
void div(void)   
{
    int a,b;
    printf("\nFor DIVISION\nEnter two values:\n ");
    scanf("%d%d",&a,&b);
    printf("Division : %d\n",a/b);
}
void main()
{
    add();
    sub();
    mul();
    rem();
    div();         
}