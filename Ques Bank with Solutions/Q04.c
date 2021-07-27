//check for odd or even
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number you want to check:-\n");
    scanf("%d",&n);

    if( n%2==0 )
    {
        printf("the entered number is even");
    }
    else
        printf("the entered number is odd");
}