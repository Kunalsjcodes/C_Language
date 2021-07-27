 //Input an array of 5 elements and search a specific element entered by user. 

#include<stdio.h>
void main()
{
    int a[5],se,n,f=0;
    
    printf("PLease enter 5 array elements: \n");
    for(n=0;n<=4;n++)
    {
        scanf("%d",&a[n]);
    }
    printf("Your array: \t\t\n");
    for(n=0;n<=4;n++)
    {
        printf("\t%d",a[n]);
    }
    printf("\nEnter a searching element: ");
    scanf("%d",&se);
    
    for(n=0;n<=4;n++)
    {
        if(a[n]==se)
        {
            f=1;
            printf("Value found at %d index!!\n",n+1);
            // break;
        }
    }
//     if(f==1)
//     {
//         printf("Value found at %d index!!",n+1);
//     }
//     else
//     {
//         printf("Not found!!!");
//     }
}