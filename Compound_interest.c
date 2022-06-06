#include <stdio.h>
#include <math.h>
int main()
{
    float principal, rate, time;
    printf("Enter principal: ");
    scanf("%f", &principal);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);
    float interest = principal * pow((1 + (rate / 100)), time);
    printf("Interest is: %.2f Rs", interest);
    return 0;
}
