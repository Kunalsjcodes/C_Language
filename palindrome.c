/* 
121
111
131
434
565


1112111
 */

#include<stdio.h>
void main()
{
    int n,r=0,a=0,t=0;
    printf("ENter a  number: ");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        r=n%10;
        a=r+(a*10);
        n=n/10;
    }
    if(a==t)
    {
        printf("Palindrome!!!");
    }
    else
    {
        printf("Not Palindrome!!!!");
    }
    


}