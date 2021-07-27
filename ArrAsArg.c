#include<stdio.h>
void print(int n[]);

void print(int n[])
{
    int x;
    printf("Array from main()\n\n");
    for(x=0;x<5;x++)
    {
        printf("%d\n",n[x]);
    }
}

void main()
{
    int i,n[5];
    printf("Enter 5 elements: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
    }
    print(n);
}