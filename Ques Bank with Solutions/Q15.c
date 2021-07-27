//CALCULATOR
#include <stdio.h>
void main()
{
    int sum,subtraction,divide,reminder,multiply,a,b,n;
    printf("choose the number for the type of calculation:\n");
    printf("1:- Sum\n");
    printf("2:- Subtraction\n");
    printf("3:- Divide\n"); 
    printf("4:- Reminder\n");
    printf("5:- Multiply\n");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
                printf("sum\n");
                printf("enter any two number\n");
                scanf("%d%d",&a,&b);
                 sum=a+b;
                printf("sum of the entered number is %d\n",sum);
            break;
        case 2: 
                printf("subtraction\n");
                printf("enter any two number\n");
                scanf("%d%d",&a,&b);
            subtraction=a-b;
                printf("subtraction of the entered number is %d\n",subtraction);
            break;
        case 3:
                printf("divide\n");         
                printf("enter any two number\n");
                scanf("%d%d",&a,&b);
            divide=a/b; 
                printf("division of the entered number is %d\n",divide);
            break;
        case 4:
                printf("reminder\n");
                printf("enter any two number\n");
                scanf("%d%d",&a,&b);
            reminder=a%b;
                printf("reminder of the entered number is %d\n",reminder);
            break;
        case 5:
                printf("multiply\n");
                printf("enter any two number\n");
                scanf("%d%d",&a,&b);
            multiply=a*b;
                printf("multiplication of the entered number is %d\n",multiply);
            break;        
        default: 
            printf("enter a valid number for calculation");
    }
}