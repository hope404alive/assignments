#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int principal, time;
    float si, ci, rate;

    printf("Enter the value of principal amount \n");
    scanf("%d", &principal);
    printf("Enter the value of rate of interest \n");
    scanf("%f", &rate);
    printf("Enter the value of time in years \n");
    scanf("%d", &time);
    si = (principal * rate * time) / 100;
    printf("the simple interest is Rs %f \n", si);

    ci = principal * (pow((1 + rate / 100), time) - 1);

    printf("the compound interest is Rs. %f", ci);

    return 0;
}