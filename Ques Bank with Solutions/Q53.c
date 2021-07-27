//to print total number of positive and negative eements

#include<stdio.h>
int main()
{
    int i, positive=0, negative=0, a[5];
    printf("Enter 5 elements in array: \n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<5; i++)
    {
       
        if(a[i]<0)
        {
            negative++;
        }
        else
        {
            positive++;
        }
    }

    printf("Total positive elements: %d\n", positive);
    printf("Total negative elements: %d", negative);
}