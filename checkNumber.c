// Write a program to check if a number is divisible by 2 or not.

#include <stdio.h>
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    if (num%2 == 0){
        printf("Even Number\n");
    }
    else{
        printf("Odd Number\n");
    }
    return 0;
}