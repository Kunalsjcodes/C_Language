 //to print only positive numbers
 
 #include<stdio.h>
 int main()
 {
    int a[5];
    printf("Enter array elements: \n");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("positive numbers in the array are:\n");
    for(int i=0; i<5; i++)
    {
        if(a[i]>0)
        printf("%d ", a[i]);
     
    }  
    printf("0");  
}