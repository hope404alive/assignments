#include <stdio.h>
#include <conio.h>
int main()
{
    int rem, n1, n2, on1, on2;
    printf("Enter the value of no.1 and no.2 \n ");
    scanf("%d%d", &n1, &n2);
    on1 = n1;
    on2 = n2;
    if (n2 > n1)
    {
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }
    while (n1 % n2 != 0 || n2 % n1 == !0)
    {
        rem = n1 % n2;
        n2 = n1;
        n2 = rem;
    }

    printf("the greatest common divisor is %d ", n2);
    printf("the LCM is %d ", (on1 * on2) / n2);
    return 0;
}