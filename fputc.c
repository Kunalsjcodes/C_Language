#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("Demo.txt","r");
    if(fp==NULL)
    {
        fclose(fp);
        fp=fopen("Demo.txt","w");
        fputc('H',fp);
    }
    else
    {
        fp=fopen("Demo.txt","a");
        fputc('H',fp);
        
    }
    // fclose(fp);
    
}