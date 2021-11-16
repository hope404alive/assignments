#include <stdio.h>
#include <conio.h>
int main(){
int n,i,sum=0;
printf("Enter number to find the sum upto \n");
scanf("%d",&n);

for (i=1;i<=n;i++){

    sum+=i;
}
printf("the sum of the number upto %d is %d ",n,sum);
return 0; 
}