// Write a program to print the average of 3 number.

#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    printf("Enter num3: ");
    scanf("%d",&num3);
    printf("Average of 3 numbers: %d", (num1+num2+num3)/3);
    return 0;
}