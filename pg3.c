#include <stdio.h>
#include <conio.h>
int main()
{
    //swap the values of two variables using a third variable
    int a, b, c;
    a = 20;
    b = 39;
    printf("the value of  a %d and b %d is \n ", a, b);
    c = a;
    a = b;
    b = c;
    printf("After swapping \n ");
    printf("the value of a is %d and b is %d ", a, b);
    return 0;
}