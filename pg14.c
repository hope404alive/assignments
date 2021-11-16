#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
int num,sum,rem,temp;
printf("Name-Nihit Pathak \n Roll No. - 12104017NOO6 \n");
for(num=100;num<=900;num++)
{
    sum=0;
    temp=num;
    while (temp!=0)
    {
        rem=temp%10;
    sum=sum+ (pow(rem,3));
    temp=temp/10;
    }
    if(sum==num)
   { printf("%d \n ",num);}
}
return 0; 
}