/* 
we can call a c function in following method:
1) call by value
2) call by refrence (pointer with function)
 */
// call by value
#include<stdio.h>
void swap(int *a, int *b)                                     //a,b->formal argument
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("\nAfter swap[In swap]: \nA is: %d\nB is: %d",*a,*b);
}
void main()
{
    int a,b;
    printf("Enter two values: \n");
    scanf("%d%d",&a,&b);                                    //a,b-> Actual Args
    swap(&a,&b);
    printf("\n[In main()]\nA: %d\nB : %d",a,b);
}

