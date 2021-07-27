#include <stdio.h>

struct stud
{
    int id;
    char n[50], fn[50];
}s[2];

void show()
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
    for (a = 0; a <= 1; a++)
    {
        printf("ENter your id: ");
        scanf("%d", &s[a].id);
        //printf("ENter your Name: ");
        scanf("%s", s[a].n);
        //fflush(stdin);
        scanf("%s", s[a].fn);
    }
    show();                    //fucntion calling

}