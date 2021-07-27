//WAP to input a 2-D array of 9 elements and count total positive and negative numbers in the matrix

#include<stdio.h>
void main()
{
    int n,m,a[100][100],r,c,odd,even,positive=0,negative=0;
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
            if(a[n][m] <0)
            {
                negative++;
            }    
            else
            {
                positive++;
            }
        }
    }     
    printf("Total positive elements: %d\n", positive);
    printf("Total negative elements: %d", negative);
}
