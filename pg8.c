#include <stdio.h>
#include <conio.h>
int main()
{
    float a, b;
    char x;

    printf("Enter the value of the two numbers \n");
    scanf("%f%f", &a, &b);
    printf("Enter the operator \n");
    scanf("%s", &x);
    switch (x)
    {
    case '+':
        printf("%f+%f = \a %f \n", a, b, (a + b));
        break;
    case '-':
        printf("%f-%f=\a %f\n", a, b, (a - b));
        break;
    case '*':
        printf("%f*%f=\a %f\n", a, b, (a * b));
        break;
    case '/':
        printf("%f/%f=\a %f\n", a, b, (a / b));
        break;
    default:
        printf("Invalid input");
        break;
    }
    getch();
    return 0;
}