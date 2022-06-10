#include<stdio.h>
int main()
{
    int n, i,j,flag=0;
    printf("Enter Number you want to check: ");//input number fo check
    scanf("%d",&n);
    if(n==0 || n==1){ // 0 and 1 are no prime numbers
        flag=1;
    }
    for (i=2;i<n/2;++i){ 
        if(n%i==0){
            flag=1;
            break;
        }

    }
    if(flag==0){ 
        printf("Number is prime!\n");
    
    }
    else {
        printf("Number is not prime!\n");
    }
    return 0;
}