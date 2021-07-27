#include<stdio.h>
void main()
{
    FILE *fp;
    char c[100];
    fp=fopen("Demo.txt","r");
    if(fp!=NULL)
    {
        printf("%s",fgets(c,100,fp));
    }
    else
    {
        printf("file not exists !!");
    }
    fclose(fp);
}