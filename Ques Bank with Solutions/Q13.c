//print greeting message
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number to print the greeting message as per number shown below\n");
    printf("1:- Birthday\n");
    printf("2:- Anniversary\n");
    printf("3:- winn\n");
    printf("4:- loss\n");
    scanf("%i",&n);
    switch(n)
    {
        case 1:
            printf("Happy Birthday");
        break;
        case 2:
            printf("happy Wedding Anniversary");
        break;
        case 3:
            printf("Lets Celebrate");
        break;
        case 4:
            printf("Dont Give Hope And Try Once Again");
        break;
        default:
        printf("Please enter the valid number for events");
    }
}