//enter 5 number and print the largest

#include <stdio.h>
int main() {
    int i, n;
    float arr[5];

    for (i = 0; i < 5; ++i) {
        printf("Enter number%d: ", i + 1);
        scanf("%f", &arr[i]);
    }   
    for (i = 1; i < 5; ++i) 
    {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }

    printf("Largest element = %.2f", arr[0]);

}