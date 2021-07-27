/*

     m0   m1   m2   m3
n0   3    4     1    4
n1   5    3     2    6
n2   5    6     1    7
n3   7    1     2    2 


*/



#include<stdio.h>
void main()
{
    int n,m,a[4][4],x=0;
    for(n=0;n<4;n++)
    {
        for(m=0;m<4;m++)
        {
            printf("ENter a value for address [%d][%d]: ",n,m);
            scanf("%d",&a[n][m]);
        } 
    }

    for(n=0;n<4;n++)
    {
        for(m=0;m<4;m++)
        {
            printf("%d ",a[n][m]);
        }
        printf("\n");
    }
    for(n=0,m=0;n<4,m<4;n++,m++)
    {
        x=x+a[n][m];
    }
    printf("\nFwd Sum: %d",x);
    
}


/*
n=0,1,2,3,4                                 n<4
m=0,1,2,3,4                                 m<4
x=0->3->6->7->9
*/
