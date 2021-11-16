#include <stdio.h>
#include <conio.h>
int main(){
int num,n,reverse=0,digit,rem;
printf("Enter any number: \a  ");
scanf("%d",&num);
n=num;
while (num!=0)
{
    rem=num%10;
    reverse=reverse*10+rem;
    num=num/10;
}
if (reverse==n)
{
    printf(" this is a palindrome no. \n ");

}
else {
    printf("This not a palindrome no . \n");
}
printf("The reverse of %d is %d ",n,reverse);
return 0; 
}