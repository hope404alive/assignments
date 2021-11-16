#include <stdio.h>
#include <conio.h>
int main(){
int r ,i,sum;
printf("Enter the number : \a ");
scanf("%d",&r);
for (i=1;i<=10;i++){
    sum=r*i;
    printf("%d X %d = %d\n ",r,i,sum);
}
return 0; 
}