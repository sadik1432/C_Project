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
            int nodays,years,weeks,days;
            printf("Enter Number of Days: ");
            scanf("%d",&nodays);
            years = nodays/365;
            weeks = (nodays%365)/7;
            days = (nodays%365)%7;
            printf("%d year,%d weeks,%d days",years,weeks,days);
        } 
        else
        {
            break;
        }
        }
return 0;
}
