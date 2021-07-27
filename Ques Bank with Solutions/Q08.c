/*#include<stdio.h>
void main()
{
    char ch;
    long pa, ds;
    printf("Please press H for handloom or M for Mill Cloths\nEnter Category of Cloth: ");
    scanf("%c",&ch);
    if(ch=='h'|| ch=='H')
    {
        printf("ENter purchase ammt: ");
        scanf("%ld",&pa);
        if(pa>25000)
        {
            ds=(pa*20)/100;
        }
        else if(pa>15000 && pa<=25000)
        {
            ds=(pa*12)/100;
        }
        else
        {
            ds=(pa*7)/100;
        }
    }
    else if(ch=='m' || ch=='M')
    {
        printf("ENter purchase ammt: ");
        scanf("%ld",&pa);
        if(pa>20000)
        {
            ds=(pa*25)/100;
        }
        else if(pa>15000 && pa<=20000)
        {
            ds=(pa*12)/100;
        }
        else
        {
            ds=0;
        }
    }
    printf("Net Ammt: %ld",pa-ds);
}*/
#include<stdio.h>
void main()
{
    char ch;
    long pa, ds;
    printf("Please press H for handloom or M for Mill Cloths\nEnter Category of Cloth: ");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'h': case 'H': 
        printf("ENter purchase ammt: ");
        scanf("%ld",&pa);
        if(pa>25000)
        {
            ds=(pa*20)/100;
        }
        else if(pa>15000 && pa<=25000)
        {
            ds=(pa*12)/100;
        }
        else
        {
            ds=(pa*7)/100;
        }

        break;
    case 'm': case 'M':

        printf("ENter purchase ammt: ");
        scanf("%ld",&pa);
        if(pa>20000)
        {
            ds=(pa*25)/100;
        }
        else if(pa>15000 && pa<=20000)
        {
            ds=(pa*12)/100;
        }
        else
        {
            ds=0;
        }
        break;
        default: 
        printf("Please try again with a valid amount!!");
    }
    printf("Net Ammt: %ld",pa-ds);
}