// #include<stdio.h>
// void main()
// {
//     int a,b,c;
//     a=12;
//     b=33;
    


//     c=a;
//     a=b;
//     b=c;

//     printf("A: %d",a);
//     printf("\nB: %d",b);
// }
#include<stdio.h>
void main()
{
    int a,b;
    a=12;
    b=33;

    a=a+b;
    b=a-b;
    a=a-b;    

    printf("A: %d",a);
    printf("\nB: %d",b);
}