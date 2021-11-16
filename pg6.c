#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("enter the year \t");
    scanf("%d", &year);
    if (year % 4 == 0 || year % 400 == 0)
    {
        printf(" %d is a leap year ", year);
    }
    else if (year % 100 == 0)

    {
        printf("%d  not a leap year", year);
    }
    else
    {
        printf(" %d not a leap year ", year);
    }

    return 0;
}