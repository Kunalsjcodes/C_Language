#include<stdio.h>
struct stud
{
    int id;
    char n[22];
};

void main()
{
    struct stud *s;
    printf("ENter your id: ");
    scanf("%d",&s->id);
    fflush(stdin);
    printf("ENter your name: ");
    gets(s->n);
    printf("ID\t\tName\n------------------------------------");
    printf("\n%d\t\t%s",s->id,s->n);
}
