#include<stdio.h>
void main()
{
    int n[5],r,c,se,f,m,l,t;
    printf("ENter 5 elements: \n");
    for(r=0;r<5;r++)
    {
        scanf("%d",&n[r]);
    }
    for(r=0;r<5;r++)
    {
        for(c=r+1;c<5;c++)
        {
            if(n[r]>n[c])
            {
                t=n[r];
                n[r]=n[c];
                n[c]=t;
            }
        }
    }
    printf("YOur array: \t");
    for(r=0;r<5;r++)
    {
        printf("\t%d",n[r]);
    }
    printf("\nEnter Searching element: ");
    scanf("%d",&se);
    f=0;
    m=0;
    l=4;
    while(f<=l)
    {
        m=(f+l)/2;
        if(se==n[m])
        {
            printf("\nYour searching term is found at %d",m+1);
            break;
        }
        else
        {
            if(se>n[m])
            {
                f=m+1;
            }
            else
            {
                l=m-1;
            }   
        } 
    }
    if(f>l)
    {
        printf("Not found!!!");;
    }
}
/* 
4 6 7 8 9
0 1 2 3 4
se=4

f=0
l=4
m=0

 */