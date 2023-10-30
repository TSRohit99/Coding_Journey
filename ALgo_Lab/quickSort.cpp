#include<iostream>

using namespace std;


void swap(int arr[], int i, int j){
    int temp= arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}


int partition(int arr[], int l, int r){

    int pivot= arr[r];
    int i = l-1;

    for(int j=l; j<r; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr, i,j);
        }
     
    }
    swap(arr, i+1, r);
    return i+1;
}

void quickSort(int arr[], int l, int r){

    if(l<r){
        int pivot= partition(arr, l,r);
        quickSort(arr, l, pivot-1);
        quickSort(arr, pivot+1, r);

    }
}

void print(int arr[], int sz){
     for(int i=0; i<sz; i++){
        cout<< arr[i]<< " ";
    
}

}
int main (){
    int arr[] = {4, 3, 2, 1,1,0,9,3,23,56,234,1222,109292};
    int sz= sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, sz-1); //sz-1 last index
    for(int i=0; i<sz; i++){
        cout<< arr[i]<< " ";
    }
}