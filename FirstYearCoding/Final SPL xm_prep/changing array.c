#include <stdio.h>

void arraycopy(int arr[]){

int i,crr[7];

 for(i=0;i<7;i++)
     crr[i]=arr[i];

  printf("new array: ");

  for(i=0;i<7;i++)
      printf("%d",crr[i]);

}

int main (){

int arr[]={2,3,4,5,6,7,8},n;

arraycopy(arr);

return 0;
}
