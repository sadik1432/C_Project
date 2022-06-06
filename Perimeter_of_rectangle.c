// Perimeter of the Rectangle

#include<stdio.h>
#include<conio.h>
int main(){
    float length,width;
    printf("\nEnter the length of the rectangle: ");
    scanf("%f",&length);
    printf("Enter the width of the rectangle: ");
    scanf("%f",&width);
    printf("Perimeter of the rectangle: %.2f",2*(length+width));
    getch();
    return 0;
}