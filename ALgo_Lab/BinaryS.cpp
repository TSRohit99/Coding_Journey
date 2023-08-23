#include<iostream>
using namespace std;

int BS(int arr[], int key, int beg, int end){
    if(beg>end)
     return 404;
    int mid= (beg+end)/2;
    if(arr[mid]==key)
     return mid;
    else if(arr[mid]>key)
     return BS(arr,key,beg,mid-1);
    else
     return BS(arr,key,mid+1,end);
    

}

bool isSorted(int arr[],int n){
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1])
        return false;
    }
 return true;
}

void ssort (int arr[], int n){
    int mVal,mIndex,i, j;
    for( i=0; i<n-1; i++){
        mVal=arr[i]; //mVal init korlam karon ita takia compare start kormu and bar bar bader index ek gor baraia itare mVal dormu pore itar loge amr compare kormu
        mIndex=i;// mIndex bar koria raklm 

        for(j=i+1; j<n; j++){ //mVal or lpoge baki sob value or comapare koria index bar korlam
            if(mVal>arr[j]){ 
                mVal=arr[j];
                mIndex=j;
            }
        }
        // smallest value or index oe shate shate jita re min dorcilam ota re swap korlam
        int temp=arr[i];
        arr[i]=arr[mIndex];
        arr[mIndex]=temp;
        
    }
}

int main(){
    int arr[]={1,4,200,5,6,3,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(!isSorted(arr,n))
     ssort(arr,n);
    int key=5;
    cout<<BS(arr,key,0,n-1);



}