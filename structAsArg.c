#include <stdio.h>
/* 
struct stud
{
    int id;
    char n[50],fn[50];
};

void show(struct stud s)
{

    printf("Records\nID\t\tName\t\tFather's Name\n__________________________________________");
    printf("\n%d\t\t",s.id);
    printf("%s\t\t%s",s.n,s.fn);
        
}
void main()
{
    int a;
    struct stud b;
   
        printf("ENter your id: ");
        scanf("%d",&b.id);
        //printf("ENter your Name: ");
        scanf("%s",b.n);
        //fflush(stdin);
        scanf("%s",b.fn);
        show(b);
}




 */

//PAssing Array of Structure object to a function
#include <stdio.h>

struct stud
{
    int id;
    char n[50], fn[50];
};

void show(struct stud s[])
{
    int i;
    printf("Records\nID\t\tName\t\tFather's Name\n__________________________________________");

    for (i = 0; i <= 1; i++)
    {
        printf("\n%d\t\t", s[i].id);
        printf("%s\t\t%s", s[i].n, s[i].fn);
    }
}
void main()
{
    int a;
    struct stud b[2];

    for (a = 0; a <= 1; a++)
    {
        printf("ENter your id: ");
        scanf("%d", &b[a].id);
        //printf("ENter your Name: ");
        scanf("%s", b[a].n);
        //fflush(stdin);
        scanf("%s", b[a].fn);
    }
    show(b);                    //fucntion calling

}