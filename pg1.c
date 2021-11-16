#include <stdio.h>
#include <conio.h>
int main()
{
    float result = 0, MaxMarks;
    int subject, n, i, max;
    printf("Name-Nihit Pathak \n Roll no- 121")
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
    printf("the marks obtained %f out of  %f \n",result,MaxMarks );
    printf("the percentage is %f  \t ", percentage);
    return 0;
}