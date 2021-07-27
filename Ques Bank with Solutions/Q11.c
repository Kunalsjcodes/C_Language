
#include<stdio.h>
void main()
{
    int h,wg;
    printf("ENter your working hours: ");
    scanf("%d",&h);
    if(h>=1 && h<=4)
    {
        wg=h*10;
    }
    else if(h>=5 && h<=7)
    {
        h=h-4;
        wg=(h*20)+40;
    }
    else if(h>=8 && h<=9)
    {
        h=h-7;
        wg=(h*30)+100;
    }
    else 
    {
        h=h-9;
        wg=(h*45)+160;
    }
    printf("Your wages : %d",wg);    
}