//input 5 array and display

#include<stdio.h>
void main()
{
    int n,a[5];
    for(n=0;n<=4;n++)
    {
        scanf("%d",&a[n]);
    }
    
    for(n=0;n<=4;n++)
    {
        printf("%d\t",a[n]);
    }
}
