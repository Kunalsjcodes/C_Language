#include<stdio.h>
union std
{
    int id;
    char n[20];
};

void main()
{
    union std s;
    
    printf("Enter you id: ");
    scanf("%d",&s.id);
    printf("\n%d",s.id);

    fflush(stdin);
    printf("ENter your name: ");
    gets(s.n);
    printf("\t\t%s",s.n);

    // printf("ID\t\tName\n---------------------------------------");
}
