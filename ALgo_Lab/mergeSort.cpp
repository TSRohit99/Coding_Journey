#include <iostream>

using namespace std;

void Merge(int arr[], int low, int mid, int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[n1];
    int R[n2 ];


    for(int i=0; i<n1; i++){
        L[i]= arr[low+i];
    }
    for(int i=0; i<n2; i++){
        R[i]= arr[mid+i+1];
    }


    int i=0, j=0;
    int k=low;
        
        while(i<n1 && j<n2){
        if(L[i]<R[j]){
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
    int arr[] = {4, 3, 2, 1,0,9,3,23,56,234,1222,109292};
    int sz= sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, sz-1); //sz-1 last index
    for(int i=0; i<sz; i++){
        cout<< arr[i]<< " ";
    }
}