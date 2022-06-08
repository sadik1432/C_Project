// write a program to print the tabel of a number input by the user.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number which tabel you want: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n,i,i*n);
    }
    return 0;
}