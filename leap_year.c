#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    while (1)

    {
        printf("\nPress ENTER key to continue...\n");
        if (getch() == 0xD)
        {
            int year;
            printf("Enter a year: ");
            scanf("%d", &year);

            if (year % 400 == 0)
            {
                printf("%d is leap year\n", year);
            }
            else if (year % 100 == 0)
            {
                printf("%d is not leap year\n", year);
            }
            else if (year % 4 == 0)
            {
                printf("%d is leap year\n", year);
            }
            else
            {
                printf("%d is not leap year\n", year);
            }
        } 
        else
        {
            break;
        }
        }
return 0;
}
