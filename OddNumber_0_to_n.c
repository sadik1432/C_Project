// write a program to print all the odd numbers from 0 to n 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 0; i <=n; i++){
        if(i%2 ==0){
            continue;
        }
        printf("%d ", i);
    }
    
    return 0;
}