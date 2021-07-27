#include <stdio.h>
static int x;
void show()
{
    int a;
    a = 0;
    a++;
    a++;
    a++;
    x++;
    x++;
    x++;
    x++;
    printf("\n%d", x);
    printf("\n%d", a);
}
void main()
{
    show();
    show();
    show();
}

/*
 x  4 
 a= 15 
*/