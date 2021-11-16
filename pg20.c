#include <stdio.h>
#include <conio.h>
int main(){
int i=1,num;
printf("enter a positive number : \a ");         
scanf("%d", &num);
printf("the factors are : ");
for (i=1;i<=num;i++)
{
    if (num%i==0)
    {
    printf("%d \a",i);
    }

}
return 0; 
}