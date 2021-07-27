//WAP to input 5 element array and sort it using selection sort.

#include<stdio.h>
void main()
{
    int a[5],i,j,t;
    printf("ENter 5 elements for array: \n");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nBefore sorting: ");
    for(i=0;i<=4;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\nAfter Sorting: ");  
    for(i=0;i<=4;i++)
    {
        for(j=i+1;j<=4;j++)
        {
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
        } 
        printf("\t%d",a[i]);      
    } 
}