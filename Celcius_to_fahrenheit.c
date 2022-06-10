#include <stdio.h>
float c2f(float celcius){
    float fahrenheit = (celcius*(9.0/5.0))+32;
    return fahrenheit;

}
    

int main(){
   float n;
   printf("Enter temperature in celcius: ");
   scanf("%f", &n);
   printf("%.2f celcius = %.2f fahreheit",n,c2f(n));
  return 0;
}
