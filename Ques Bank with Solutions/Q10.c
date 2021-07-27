#include <stdio.h> 
  
int main() 
{ 
    int A; 
  
    printf("Enter the number A:"); 
    scanf("%d", &A); 
  
    if (A == 0) 
        printf("the entered number is neither negative nor positive\n");
    else if (A > 0) 
        printf("%d is positive.", A); 
    else 
        printf("%d is negative.", A); 
} 