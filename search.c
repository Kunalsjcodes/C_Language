// 2 5 2 2 4 6 9 0 1 3 


#include<stdio.h>
void main()
{
    int a[10],se,n,f=0;
    
    printf("PLease enter 10 array elements: \n");
    for(n=0;n<=9;n++)
    {
        scanf("%d",&a[n]);
    }
    printf("Your array: \t\t\n");
    for(n=0;n<=9;n++)
    {
        printf("\t%d",a[n]);
    }
    printf("\nEnter a searching element: ");
    scanf("%d",&se);
    
    for(n=0;n<=9;n++)
    {
        if(a[n]==se)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("Value found at %d index!!",n+1);
    }
    else
    {
        printf("Not found!!!");
    }
}