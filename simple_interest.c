#include<stdio.h>
int main(){
    float principal,time,rate;
    printf("Enter the Principal: ");
    scanf("%f",&principal);
    printf("Enter the rate: ");
    scanf("%f",&rate);
    printf("Enter the time: ");
    scanf("%f",&time);
    printf("Interest = %.2f Rs",(principal*rate*time)/100);
    return 0;
}