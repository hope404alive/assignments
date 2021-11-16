#include <stdio.h>
#include <conio.h>
int main(){
int i,j,k;
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
return 0; 
}
