//to input an 2-d array and print the transpose  

#include<stdio.h>
void main()
{
    int n,m,a[100][100],r,c;
   /* printf("MAX ROW AND COLUMNS ARE LIMITED TO 100\nEnter numbers of rows: ");
    scanf("%d",&r);
    printf("Enter numbers of columns: ");
    scanf("%d",&c);
*/
    for(n=0;n<4;n++)
    {
        for(m=0;m<4;m++)
        {
            printf("ENter a value for address [%d][%d]: ",n,m);
            scanf("%d",&a[n][m]);
        } 
    }
    printf("Before transpose: \n");
    for(n=0;n<4;n++)
    {
        for(m=0;m<4;m++)
        {
            printf("%d ",a[n][m]);
        } 
        printf("\n");
    }
    printf("\nAfter transpose: \n");
    for(n=0;n<4;n++)
    {
        for(m=0;m<4;m++)
        {
            printf("%d ",a[m][n]);
        } 
        printf("\n");
    }
}               
