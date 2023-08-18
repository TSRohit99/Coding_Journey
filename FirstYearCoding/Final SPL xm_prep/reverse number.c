#include <stdio.h>

int main (){

 int n,rem,div,temp;
printf("Enter the number: ");
scanf("%d",&n);

temp=n;

while (temp!=0){

    rem=temp%10;
    temp/=10;
    printf("%d",rem);
}

return 0;
}
