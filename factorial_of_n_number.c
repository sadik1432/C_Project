#include<stdio.h>
int main()
{
    int n;
    long fact=1;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        fact *=i;
    }
    printf("Factorial:%ld",fact);
    return 0;
}