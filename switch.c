//print week days
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number to print the respective week days!\n Week starts from Monday!!\n");
    scanf("%i",&n);
    switch(n)
    {
        case 1:
            printf("Monday");
        break;
        case 2:
            printf("TUesday");
        break;
        case 3:
            printf("wednesday");
        break;
        case 4:
            printf("thursday");
        break;
        case 5:
            printf("friday");
        break;
        case 6:
            printf("saturday");
        break;
        case 7:
            printf("sunday");
        break;
        default:
        printf("Please try again!!");
    }
}