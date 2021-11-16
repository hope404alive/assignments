#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    printf("enter a number \n ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is an even number \t ", num);
    }
    else
    {
        printf("%d is not a number \n", num);
    }
    return 0;
}