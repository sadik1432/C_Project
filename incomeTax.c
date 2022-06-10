#include <stdio.h>
int main()
{
   float income;
   printf("Enter income in lakh: ");
   scanf("%f", &income);
   if(income<2.5){
       printf("You don't have to pay any tax.\n");
   }
   else if(income>=2.5 && income<5){
       printf("You have to pay tax 5%% of %.2f lakh is: %.2f Thousand.\n",income,(0.05*income*100000));
   }
   else if(income>=5 && income<10){
       printf("You have to pay tax 20%% of %.2f lakh is: %.2f Thousand.\n",income,(.2*income*100000));
   }
   else{
       printf("You have to pay tax 30%% of %.2f lakh is: %.2f Thousand.\n",income,(.3*income*100000));
   }
  return 0;
}