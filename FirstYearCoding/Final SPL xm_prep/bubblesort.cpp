#include<stdio.h>

void bubblesort(int arr[], int n){

//BubbleSort algo
int i,j;
    for(i=0;i<=(n-2); i++) {
        for(j=(n-1);j>=(i+1);j--){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
    }

int main (){



int n,i;
        printf("Enter the array size: ");
         scanf("%d",&n);
         int arr[n];

         //taking array input

         for(i=0;i<n; i++) {
           printf("Arr[%d]= ",i);
           scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);


    //printing Array
    for(i=0;i<n; i++) {
        printf("%d",arr[i]);
    }

return 0;
}
