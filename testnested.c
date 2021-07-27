//        c=1     c<=r
// r1     1
// r2     1 2
// r3     1 2 3
// r4     1 2 3 4
// r5     1 2 3 4 5


/*

#include<stdio.h>
void main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%d ",c);
        }
        printf("\n");
    }   
}
*/
/*   DRY RUN
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5

r=1|2|3|4|5 |6                        r<=5
c=1|2
c=1|2|3
c=1|2|3|4
c=1|2|3|4|5
c=1|2|3|4|5|6
*/

//        c=1     c<=r
// r1     1
// r2     2 2
// r3     3 3 3
// r4     4 4 4 4
// r5     5 5 5 5 5



// #include<stdio.h>
// void main()
// {
//     int r,c;
//     for(r=1;r<=5;r++)
//     {
//         for(c=1;c<=r;c++)
//         {
//             printf("%d ",r);
//         }
//         printf("\n");
//     }   
// }

//        c=r     c>=1      printf-> c
// r1     1
// r2     2 1
// r3     3 2 1
// r4     4 3 2 1
// r5     5 4 3 2 1



// #include<stdio.h>
// void main()
// {
//     int r,c;
//     for(r=1;r<=5;r++)
//     {
//         for(c=r;c>=1;c--)
//         {
//             printf("%d ",c);
//         }
//         printf("\n");
//     }   
// }

//        c=r     c>=1      printf-> c
// r1          1
// r2         21
// r3        321
// r4       4321
// r5      54321



// #include<stdio.h>
// void main()
// {
//     int r,c;
//     for(r=1;r<=5;r++)
//     {
//         for(c=5;c>=r;c--)
//         {
//             printf("  ");
//         }
        
//         for(c=r;c>=1;c--)
//         {
//             printf("%d ",c);
//         }
        
//         printf("\n");
//     }   
// }
/*
r=1,2,3,4,5,6
c1=5,4,3,2,1,0
c2=1,0

c1=5,4,3,2,1
c2=2,1,0

c1=5,4,3,2
c2=3,2,1,0

c1=5,4,3
c2=4,3,2,1,0

c1=5,4
c2=5,4,3,2,1,0
     1
    21
   321
  4321
 54321

*/

/*
    A
   BB
  CCC
 DDDD
EEEEE

*/

// #include<stdio.h>
// void main()
// {
//     int r,c;
//     for(r=65;r<=69;r++)
//     {
//         for(c=69;c>=r;c--)
//         {
//             printf("  ");
//         }
        
//         for(c=r;c>=65;c--)
//         {
//             printf("%c ",r);
//         }
        
//         printf("\n");
//     }   
// }

/*
 55555
  4444
   333
    22
     1

*/
#include<stdio.h>

void main()
{
    int r,c;
    for(r=5;r>=1;r--)
    {
        for(c=5;c>=r;c--)
        {
            printf(" ");
        }
        
        for(c=1;c<=r;c++)
        {
            printf("%d",r);
        }
        printf("\n");
    }
}