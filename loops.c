/*
there are 3 types of looping statements in C language:

    do-while                    exit control loop and execute atleast once even if the condition is false;

    while                       entry control loop and only execute if condition is true;                      
    
    for                         entry control loop and only execute if condition is true; **IMPORTANT**
  */  
/*
for (init1,init2,init3.... init n;con1,con2,...con n; inc1dec1.......inc_n_dec n)

*/

//print your name 10 times;;;


//do-whie
/*#include<stdio.h>
void main()
{
    int n;
    n=0;                            //Initialization
    do
    {
        printf("\n%d: Kunal",n);
        n++;                        //Increement/Decreement
    } 
    while (n>10);                  //Condition
    
}*/


//while
/*#include<stdio.h>
void main()
{
    int n;
    n=1;                            //Initialization
    while (n<=10)                    //Condition    
    {
        printf("\n%d: Kunal",n);
        n++;                        //Increement/Decreement
    }
}*/

//for

/*
#include<stdio.h>
void main()
{
    int n;                 
    for(n=1; n<=10 ; n++)
    {
        printf("\n%d: Kunal",n);
    }
}
*/
