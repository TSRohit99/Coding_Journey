#include <bits/stdc++.h>

using namespace std;

void Merge(int arr[], int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[n1];
    int R[n2 ];
    for(int i=0; i<n1; i++){
        L[i]= arr[low+1];
    }
    for(int i=0; i<n2; i++){
        R[i]= arr[mid+i+1];
    }

    L[n1]=100;
    R[n2]=100;
    int i=0, j=0;
   int k=low;
        
        while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }

       else {
            arr[k]=R[j];
            j++;
        }
        k++;
    }

while(i<n1){
    arr[k]=L[i];
            i++;
            k++;

}

while(j<n2){
     arr[k]=R[j];
            j++;
            k++;
}

}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[] = {7, 6, 5, 4, 3};
    int sz= sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, sz);
    for(int i=0; i<sz; i++){
        cout<< arr[i]<< " ";
    }
}