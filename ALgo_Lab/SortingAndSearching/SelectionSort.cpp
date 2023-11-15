#include<iostream>

using namespace std;

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



int main (){
    int arr[]={8,3,65,89,3,2,34};
    int n = sizeof(arr)/sizeof(arr[0]);

    ssort(arr,n);
    cout<<"After Sorting"<<endl;
    for(int i=0; i<n;i++)
        cout<<arr[i]<<" ";
        
}