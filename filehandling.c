/* 

file
------

    create/naming a file/open
    write
    update
    close

fopen();    open a file
fclose();   close a file
fcloseall();    close all opend files

fputc();    writes a single char.
fputs();    write a string in file
fprintf();  write data in file.
fscanf();   read data from file.
fgetc();    read single char from file.
fgets();    read string from file.


modes for file
w   : write
r   : read
a   : append
w+  : opens a file in read and write mode.
r+  : opens a file in read and write mode.
a+  : opens a file in read and write mode.

 */


/* #include<stdio.h>
void main()
{
    char n[22];
    FILE *fp;
    fp=fopen("Demo.txt","w"); 
    fprintf(fp,"Hey there!!!!");
    printf("Saved!!!");
    fclose(0);
    
    fp=fopen("Demo.txt","r");
    //fscanf(fp,"%s",n);
    printf("%s",fgets(n,22,fp));
} */


/* 
#include<stdio.h>
void main()
{
    FILE *fp;
    int a,b,c;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    c=a+b;
    fp=fopen("Demo.txt","w");
    fprintf(fp,"Sum is: %d",c);
    printf("Saved!!!");
    fclose(fp);
} */

/* 
#include<stdio.h>
void main()
{
    char n[22];
    FILE *fp;
    int a,b,c;
    fp=fopen("Demo.txt","r+");
    fscanf(fp,"%[^\n]",n);
    printf("%s",n);
    fclose(fp);
} */

#include<stdio.h>
void main()
{
    FILE *fp;
    int a,b,c;
    printf("Enter two numbers: \n");
    scanf("%d%d",&a,&b);
    c=a+b;
    fp=fopen("Demo.txt","a");
    fprintf(fp,"\nSum is: %d",c);
    printf("Saved!!!");
    fclose(fp);
}
