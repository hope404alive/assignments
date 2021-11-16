#include <stdio.h>
#include <conio.h>

int main()
{
    int num, odd, even, sum = 0, result = 0;
    printf("enter the number \t");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        else if (i % 2 == !0)
        {
            result += i;
        }
    }
    printf(" the sum of even no.=%d", sum);

    printf(" the sum of odd no. = %d", result);

    return 0;
}