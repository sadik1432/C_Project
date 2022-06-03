// write a c program to calculate the area of the square
#include<stdio.h>
int main(){
    float side;
    printf("Enter the side of the square: ");
    scanf("%f",&side);
    printf("Area of the square is = %.2f unit.",side*side);
    return 0;
}