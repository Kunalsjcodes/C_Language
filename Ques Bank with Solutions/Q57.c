//2D array to print its elements

#include<stdio.h>
void main()
{
    int n,m,a[100][100],r,c;
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
        printf("\n");;
    }
}               
