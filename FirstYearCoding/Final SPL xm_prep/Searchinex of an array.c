#include <stdio.h>

void findtheindex(int n, int arr[]){

int i,pos=0;
 for(i=0;i<7;i++){

        if(arr[i]==n) {

            pos++;
             break;
        }

 }
if(pos>=1)
 printf("Index of the array: arr[%d]\nPosition of the number in array: %d",i,i+1);
 else
 printf("Not found");

}

int main (){

int arr[]={2,3,4,5,6,7,8},n;

printf("Enter the number to check the index: ");
scanf("%d",&n);

findtheindex(n,arr);

return 0;
}
