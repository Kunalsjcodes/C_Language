#include<stdio.h>
void main()
{
    int n,t=0;
    printf("ENter a  number: ");
    scanf("%d",&n);
    t=2;
    while(t<=n-1)
    {
        if(n%t==0)
        {
            break;
        }
        t++;
    }
    if(n==t || n==1)
    {
        printf("Prime!!");
    }
    else
    {
        printf("Not Prime");
    }
}