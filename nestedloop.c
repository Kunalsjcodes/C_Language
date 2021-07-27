#include<stdio.h>


//  c1 c2 c3 c4 c5
//r1 * * * * *
//r2 * * * * *
//r3 * * * * *
//r4 * * * * *
//r5 * * * * *

// void main()
// {
//     int r,c;
//     for(r=65;r<=69;r++)
//     {
//         for(c=65;c<=69;c++)
//         {
//             printf("%c ",c);
//         }
//         printf("\n");    
//     }
// }


/*
A
B A
C B A
D C B A
E D C B A



A
A B
A B C
A B C D
A B C D E


A
B B
C C C
D D D D
E E E E E
*/
// void main()
// {
//     int r,c;
//     for(r=65;r<=69;r++)
//     {
//         for(c=65;c<=r;c++)
//         {
//             printf("%c ",r);
//         }
//         printf("\n");    
//     }
// }

/*

* * * * *
* * * *
* * *
* *
*

A B C D E
A B C D 
A B C
A B
A

*/
// void main()
// {
//     int r,c;
//     for(r=69;r>=65;r--)
//     {
//         for(c=65;c<=r;c++)
//         {
//             printf("%c ",c);
//         }
//         printf("\n");    
//     }
// }


/*
        *
      * *
    * * *
  * * * *
* * * * *

*/
void main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=5;c>=r;c--)
        {
            printf("  ");
        }
        for(c=1;c<=r;c++)
        {
            printf("* ");
        }
        printf("\n");    
    }
}