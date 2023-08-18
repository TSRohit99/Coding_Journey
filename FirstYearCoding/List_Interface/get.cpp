#include<stdio.h>

void get(int arr[]){
    int n;
    printf("Enter the index you want to see the value on it : ");
    scanf("%d",&n);
    printf("The Value at Arr[%d] : %d",n,arr[n]);
}

int main (){
    int n,i;
    printf("Enter how many elements you want to add: ");
    scanf("%d",&n);
    int arr[n];

    //taking array input
    for(i=0;i<n;i++){
        printf("Arr[%d] = ",i);
        scanf("%d",&arr[i]);

    }

    get(arr);
    

}