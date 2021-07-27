//WAP to input a 2-D array of 9 elements and count total even and odd numbers in the matrix.

#include<stdio.h>
void main()
{
    int n,m,a[100][100],r,c,odd=0,even=0;
    printf("MAX ROW AND COLUMNS ARE LIMITED TO 100\nEnter numbers of rows: ");
    scanf("%d",&r);
    printf("Enter numbers of columns: ");
    scanf("%d",&c);

    for(n=0;n<r;n++)
    {
        for(m=0;m<c;m++)
        {
            printf("ENter a value for address [%d][%d]: ",n,m);
            scanf("%d",&a[n][m]);
        } 
    }
    
    for(n=0;n<r;n++)
    {
        for(m=0;m<c;m++)
        {
            printf("%d ",a[n][m]);
        }
        printf("\n");
    }
    for(n=0;n<r;n++)
    {
         for(m=0;m<c;m++)
        {
              if(a[n][m]%2 == 0)
            {
            even++;
            }
            else
            {
            odd++;
            }
        }
    }
    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);
}               
