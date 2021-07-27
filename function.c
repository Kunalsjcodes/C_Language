/*<return type> <name_of_function> (<arg1, arg2... argN>)  */
#include<stdio.h>

/* 
1) No Argument No Return
2) With Argument and No Return
3) No Argument and with Return
4) With Argument and With Return
 */

// 1) No Argument No Return
/* void add();            //prototyping/declaration//signature of a function
void sub();             
void mul();
void rem();
void dev();


void add(void)                                  //definition of a function
{
    int a,b;
    printf("Enter two values: ");
    scanf("%d%d",&a,&b);
    printf("Sum: %d",a+b);
}
void main()
{
    printf("\nCalling add()!!!");
    add();                                  //calling of a function
    printf("\nCalling add() is over!!!");
}
 */

/* // 2) With Argument and No Return
void add(int,int);            //prototyping/declaration//signature of a function

void main()
{
    int a,b;
    printf("Enter two values:\n ");
    scanf("%d%d",&a,&b);  
    printf("\nCalling add()!!!");
    add(a,b);                                           //calling of a function [calling with actual arguments]
    printf("\nCalling add() is over!!!");
}
void add(int x,int b)                                  //definition of a function [formal argument]
{
    printf("\nSum: %d",x+b);
}
 */

// 3) No Argument and With Return
/* int add();            //prototyping/declaration//signature of a function

void main()
{
    int a;
    printf("\nCalling add()!!!");
    // a=add();                                        //calling of a function [calling with actual arguments]
    // printf("\nSum is : %d",a);  
    printf("Sum is : %d",add());
    printf("\nCalling add() is over!!!");
}
int add()                                  //definition of a function [formal argument]
{
    int a,b;
    printf("Enter two values:\n");
    scanf("%d%d",&a,&b);  
    return a+b;
}
 */

/* 
int add(int,int);            //prototyping/declaration//signature of a function

void main()
{
    int a,b,x;
    a=12;
    b=22;
    printf("\nCalling add()!!!");
    // x=add(a,b);                                        //calling of a function [calling with actual arguments]
    // printf("\nSum is : %d",x);  
    printf("\nSum is : %d",add(a,b));
    printf("\nCalling add() is over!!!");
}
int add(int a,int b)                                  //definition of a function [formal argument]
{
    return a+b;
}
 */


void add(int,int);
void input();
void main()
{
    input();
}
void input()
{
    int a,b;
    printf("Enter 2 values: \n");
    scanf("%d%d",&a,&b);
    add(a,b);
}
void add(int a,int b)
{
    printf("sum is: %d",a+b);
}