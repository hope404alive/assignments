#include <stdio.h>
#include <conio.h>
int fact (int n){
    if(n<=1)
    {
        return 1;
    }
    return n*fact(n-1);
}
int combi(int n ,int r  )
{
  return fact(n)/fact(n-r)/fact(r);
}

void pascal (int line)
{int i,j,k;
    for (i=1;i<=line;i++){
        k=1;
        for ( j >= line+1-i; j <=line-1+i; j++)
        {
            if (j>=line+1-i&&j<=line-1+i&&k)
            {
                printf("*");
                k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
            
        }
        printf("\n");
    }
}
int main(){
printf("%d",void pascal(10));
   

return 0; 
}