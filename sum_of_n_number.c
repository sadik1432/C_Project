#include<stdio.h>
int main()
{
    int s,n,sum=0;
    printf("Enter Starting Number: ");
    scanf("%d", &s);
    printf("Enter Ending Number: ");
    scanf("%d", &n);
    for (int i = s; i <= n; i++){
        sum +=i;
    }
    printf("Sum of %d to %d is %d",s,n,sum);
    return 0;

}