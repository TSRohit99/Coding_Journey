#include<iostream>
#include<math.h>

using namespace std;

int __findMaxNumber(int arr[], int n){
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

void __countSort(int arr[], int n, int pos){
    int count[10]= {0};
    int output[n];

    //frequency checking
    for(int i=0; i<n; i++)
       count[(arr[i]/pos)%10]++;
    //Cum Sum
    for(int i=1; i<10; i++)
        count[i]+=count[i-1];
    //output array
    for(int i=n-1; i>=0; i--)
        output[--count[(arr[i]/pos)%10]]=arr[i];
    //coping the array
    for(int i=0; i<n; i++)
       arr[i]=output[i];
}

void radixSort( int arr[], int n){
    int Max= __findMaxNumber(arr,n);
    
    for(int pos=1; (Max/pos)>0; pos*=10)
        __countSort(arr,n,pos);
}

void __printarray(int arr[], int n){
    for(int i=0; i<n; i++)
      cout<< arr[i]<<" ";
      cout<<endl;

}

int main(){

    int arr[]={768,87,2,89,7,9};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<"Initialized Array(unsorted) :"<<endl;
     __printarray(arr, n);

      radixSort(arr, n);

     cout<<"Sorted Aray :"<<endl;
     __printarray(arr, n);

}