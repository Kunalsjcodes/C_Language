#include<stdio.h>
void main()
{
    FILE *fp;
    char c;
    fp=fopen("Demo.txt","r");
    if(fp!=NULL)
    {
            while((c=fgetc(fp))!=EOF)
            {
                printf("%c",c);
            }
    }
    else
    {
        printf("File Not exist!!!!");
    }
    fclose(fp);
    
}
