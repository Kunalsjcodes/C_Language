//total number of odd and even number

#include<stdio.h>
int main()
{
    int i, even=0, odd=0, a[5];

    printf("enter 5 numbers in array");
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++)
    {
        if(a[i]%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Total even elements: %d\n", even);
    printf("Total odd elements: %d", odd);
}