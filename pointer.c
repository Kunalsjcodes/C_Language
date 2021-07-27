#include<stdio.h>
void main()
{
    int a;
    int *p;
    a=12;
    p=&a;
    printf("\n Value of a:%d",a);               //  12
    printf("\n Address of a:%u",&a);            //  101
    printf("\n Value of p:%u",p);               //  101
    printf("\n Address of p:%u",&p);            //  97
}

