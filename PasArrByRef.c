//Array with function and pointer

#include<stdio.h>
void sort(int *p)                                     //a,b->formal argument
{
    int i,j,t;
    for(i=0;i<=4;i++)
    {
        for(j=i+1;j<=4;j++)
        {
/*             if(p[i]>p[j])
            {
                t=p[i];
                p[i]=p[j];
                p[j]=t;
            }
 */
            if(*(p+i)>*(p+j))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }

        }
    }
  }
void main()
{
    int a,n[5];
    printf("Enter 5 values: \n");
    for(a=0;a<=4;a++)
        scanf("%d",&n[a]);                                    //a,b-> Actual Args
    
    printf("\nBefore sorting:\n");
    for(a=0;a<=4;a++)
    {
        printf("\t\t%u",&n[a]);
    }
    printf("\n\n");
    for(a=0;a<=4;a++)
    {
        printf("\t\t%d",n[a]);
    }
    sort(n);


    printf("\nAfter sorting:\n");

    for(a=0;a<=4;a++)
    {
        printf("\t\t%u",&n[a]);
    }
    printf("\n\n");
    for(a=0;a<=4;a++)
    {
        printf("\t\t%d",n[a]);
    }
}
