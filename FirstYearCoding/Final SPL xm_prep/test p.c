#include<stdio.h>



int main (){

int i,k,j,l;
for (i=1; i<=5; i++) // genuine pyramid

    {

   for (j=1; j<=5-i; j++)
    printf(" ");

    for (k=1; k<=(2*i)-1; k++)
    printf("*");



    printf("\n");



    }


return 0;
}
