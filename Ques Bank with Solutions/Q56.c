//to print minimum value element

#include <stdio.h>
int main()
{
    int i,minimum,a[10];
    printf("enter 10 elements of array");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
   
    for (i = 1; i < 10; i++)
    {
        if (a[i] < minimum)
        {
           minimum = a[i];
        }
    }
   
    printf("the value of Minimum element is %d.\n",minimum);
}