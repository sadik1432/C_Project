// Perimeter of the Rectangle

#include<stdio.h>
int main(){
    float length,width;
    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);
    printf("Enter the width of the rectangle: ");
    scanf("%f",&width);
    printf("Perimeter of the rectangle: %.2f",2*(length+width));
    return 0;
}