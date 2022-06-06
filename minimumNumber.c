// Write a program to print the smallest number of two.

#include <stdio.h>
int main()
{
    float num1, num2;
    printf("Enter num1: ");
    scanf("%f", &num1);
    printf("Enter num2: ");
    scanf("%f", &num2);
    if (num1>num2){
        printf("%.2f is Grater than %.2f", num1, num2);
    }
    else{
        printf("%.2f is Grater than %.2f", num2, num1);
    }
    return 0;
}