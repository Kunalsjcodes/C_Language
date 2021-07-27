#include <stdio.h>
#include <conio.h>
struct std
{
    char name[22];
    int age;
    char fn[22];
};
void add();
void main()
{

    int ch;
    int flg = 1;
    printf("Enter your choice: \n1. Add Record\n");
    scanf("%d", &ch);
    switch (ch)
    {
        case 1:
            add();
        break;
    case 0:
        flg = 0;
        break;
    default:
        printf("Plz Enter valid choice:!!!!!");
    }
    getch();
}
void add()
{
    struct std st;
    FILE *abc;

    abc = fopen("emp.txt", "r");
    if (abc == NULL)
    {
        abc = fopen("emp.txt", "w");
    }
    else
    {
        abc = fopen("emp.txt", "a");
    }

    fflush(stdin);
    printf("Enter your Name: ");
    gets(st.name);
    printf("Enter your age: ");
    scanf("%d", &st.age);
    fflush(stdin);
    printf("Enter your Father's Name: ");
    gets(st.fn);
    fflush(stdin);
    fprintf(abc, "\n%s\t\t", st.name);
    fprintf(abc, "%d\t\t", st.age);
    fprintf(abc, "%s\t\t", st.fn);
    fclose(abc);

}
