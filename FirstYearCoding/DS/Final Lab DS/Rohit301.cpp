#include<stdio.h>

void BS(int arr[], int n){

        int i,j;
    for(i=0; i<=n-2; i++){
        for (j=n-1; j>=i+1; j--){
            if(arr[j]<arr[j-1]){
                int temp= arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}







int main (){
    int arr[]={10,5,4,9,3,7};
    int n=6;
    printf("Unsorted ");
    for(int i=0; i<n;i++)
        printf("%d ", arr[i]);

    printf("\n ");
    printf("After Sorting ");
     BS(arr, n);
    for(int i=0; i<n;i++)
        printf("%d ", arr[i]);

       
}