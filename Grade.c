#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);
    if (marks>100){
        printf("Wrong Marks");
    }
    else if (marks>=90 && marks<=100){
        printf("Grade: A+");
    }
    else if (marks>=70 && marks<90){
        printf("Grade: A");
    }
    else if (marks>=30 && marks<70){
        printf("Grade: B");
    }
    else{
        printf("Grade: C");
    }
    return 0;
}