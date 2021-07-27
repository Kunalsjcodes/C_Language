// #include<stdio.h>
// void main()
// {
//     int a[5],i,j,t;
//     printf("\nEnter the data you want to sort:-\n");
//     for(i=0;i<5;i++)
//     {
//         scanf("%d" ,& a[i]);
//     }

//     printf("\n Before Sorting:-\n");
//     for(i=0;i<5;i++)
//     {
//         printf("%d \t" ,a[i]);
//     }
//     printf("\n");
//     printf("\nAfter Sorting:-\n");
//     for(i=0;i<5;i++)
//     {
//         for(j=i+1;j<5;j++)
//         {
//             if(a[i]>a[j])
//             {
//                 t=a[j];
//                 a[j]=a[i];
//                 a[i]=t;
//             }
//         }
//         printf("%d \t" ,a[i]);
//     }
// }


#include<stdio.h>
void main()
{
    int a[5],i,j,t;
    printf(" enter 5 value \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",& a[i]);
    }
   
    printf("After Sorting");
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
        printf("%d\t" ,a[i]);
    }
}