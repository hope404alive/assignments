#include <stdio.h>
#include <conio.h>
int main()
{
    float result = 0, MaxMarks;
    int subject, n, i, max, grade;
    printf("Enter the total number of subjects \n");
    scanf("%d", &n);
    printf("Enter the maximum marks that can be obtained  \n");
    scanf("%d", &max);
    MaxMarks = n * max;
    float percentage, average, alpha;

    for (i = 1; i <= n; i++)
    {
        printf("the subject %d marks \n", i);
        scanf("%d", &subject);
        result = result + subject;
    }
    percentage = (result / MaxMarks) * 100;
    printf("the marks obtained %f out of  %f \n", MaxMarks, result);
    printf("the percentage is %f  \t ", percentage);

    if (percentage <= 100 && percentage >= 90)
    {
        printf("A grade \n ");
    }
    else if (percentage < 90 && percentage >= 80)
    {
        printf("B grade \n ");
    }
    if (percentage < 80 && percentage >= 60)
    {
        printf("C grade \n ");
    }
    if (percentage <= 60)
    {
        printf("D grade /n ");
    }
    return 0;
}