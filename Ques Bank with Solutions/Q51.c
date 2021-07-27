//sun of odd and even in array

#include<stdio.h>
void main()
{
  int i,odd=0,even=0,a[5];
    printf("input the value in array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i] % 2 == 0)
        {
            even=even+a[i];
        }
        else
        {
            odd=odd+a[i];
        }
    }
        printf("sum of even number in array is %d\n",even);
        printf("sum of odd number in array is %d\n",odd);    
}





