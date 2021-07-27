#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("Demo.txt","r");
    if(fp==NULL)
    {
        fclose(fp);
        fp=fopen("Demo.txt","w");
        fputs("Hello There",fp);
    }
    else
    {
        fp=fopen("Demo.txt","a");
        fputs("Hello There",fp);
    }
    fclose(fp);
    
}