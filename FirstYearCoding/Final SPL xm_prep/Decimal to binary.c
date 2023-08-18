#include <stdio.h>

void decitobin(int n){

int i,b=0,temp,rem,arr[100];

temp=n;

while (temp!=0) {

     rem=temp%2;
     temp/=2;
     arr[b]=rem;
     b++;

}


for (i=b-1; i>=0; i--){

    printf("%d",arr[i]);
}
 }

int main (){
int n;
printf("Enter the decimal number: ");
scanf("%d",&n);

decitobin(n);

return 0;
}
