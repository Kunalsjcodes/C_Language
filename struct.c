#include<stdio.h>

struct stud
{
    int id;
    char n[50],fn[50];
};

void main()
{
    int a;
    struct stud b[2];
   
    for(a=0;a<=1;a++)
    {
        printf("ENter your id: ");
        scanf("%d",&b[a].id);
        //printf("ENter your Name: ");
        scanf("%s",b[a].n);
        //fflush(stdin);
        scanf("%s",b[a].fn);
    }
    printf("Records\nID\t\tName\t\tFather's Name\n__________________________________________");
    for(a=0;a<=1;a++)
    {
        printf("\n%d\t\t",b[a].id);
        printf("%s\t\t%s",b[a].n,b[a].fn);
    }    
}
