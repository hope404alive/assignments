#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    n = 10;
    int a = 1, b = 0, c;
    for (int i = 1; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}