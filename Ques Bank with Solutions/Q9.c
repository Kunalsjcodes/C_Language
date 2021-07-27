//input sub and marks and grant addmission
#include<stdio.h>
void main()
{
    int smar;
    char sub;
    printf("eligibility criteria\n");
    printf("Marks in science >60\n");
    printf("\n\n");
    printf("Enter S for science : ");
    scanf("%c",&sub);
    if(sub=='s' || sub=='S')
    {
      printf("input the marks obtained in science:-\n");
      scanf("%d",&smar);     
      if(smar>60)
        printf("addmission granted\n");
      else
        printf("not elligible for addmission");     
    }
    else
        printf("not elligible for addmission");     
   
}