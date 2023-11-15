#include<iostream>

using namespace std;

void iSort(int arr[], int n){

    int key, j,i;
    for(i=1;i<n; i++){
        key=arr[i];// value
        j=i-1;// Index

while(j>=0 && arr[j]>key){
    arr[j+1]=arr[j];
    j--;
}
arr[j+1]=key;


    }

cout<<"After sorting..."<<endl;
    for(int r=0;r<n; r++) {
          printf("%d ", arr[r]);
        }



}



int main (){

    int arr[] = {9,67,875,23,15,1,4,3};
    int n= sizeof(arr)/4;
    iSort(arr,n);



}
