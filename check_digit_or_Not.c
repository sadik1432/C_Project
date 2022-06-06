// Write a program to check if given character is digit or not.

#include <stdio.h>
#include <ctype.h>
int main()
{
    char characte;
    printf("Enter any character: ");
    scanf("%c",&characte);
    if (isdigit(characte)) {
        printf("Enter character is a digit.");
    }
    else{
        printf("Entered Character is not a digit");
    }
    return 0;
}