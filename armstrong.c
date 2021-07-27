/*1   5   3
1+125+27=1 5 3
153/10

/=15

%=3
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
        a=a+(r*r*r);
        n=n/10;
    }
    if(a==t)
    {
        printf("Armstrong!!!");
    }
    else
    {
        printf("Not Armstrong!!!!");
    }
    


}