#include<stdio.h>
void main()
{
    int a[5],i,j,t;
    printf("\n*-*-*BUBBLE SORT*-*-*\n\nENter 5 elements for array: \n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nBefore sorting:\n\t ");
    for(i=0;i<=4;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=3-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            } 
        }
    }
    printf("\nAfter sorting:\n\t ");
    for(i=0;i<=4;i++)
    {
        printf("%d\t",a[i]);
    }
}