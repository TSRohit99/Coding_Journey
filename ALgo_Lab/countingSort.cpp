#include<iostream>

using namespace std;

int __findMaxNumber(int arr[], int n){
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

void countingSort(int arr[], int n)
{
    int max= __findMaxNumber(arr, n);
    int count[max+1]= {0};
    //Collecting main array's value and puting +1 in the count array index(arr value).
    for(int i=0; i<n; i++)
        count[arr[i]]+=1;

    //Doing the cumulataive Sum 
    for(int i=1; i<max+1; i++)
      count[i]+=count[i-1];

    //A bit complex part, here we are doing our final steps (arr value= count index-1=output index=arr value
    int output[n];
    for(int i=0; i<n; i++)
        output[--count[arr[i]]]=arr[i];
    cout<<"__countingSort(); appllied successfully.Printing the Array: "<<endl;
    for(int i =0; i<n; i++)
        arr[i]=output[i];

}
void __printarray(int arr[], int n){
    for(int i=0; i<n; i++)
      cout<< arr[i]<<" ";
      cout<<endl;
}

int main ()
{
    int arr[]= {4,2,2,8,3,3,1,3,4,3,6,8,89};
    int n= sizeof(arr)/sizeof(arr[0]);

    cout<<"The initial Array :"<<endl;
    __printarray(arr,n);
    countingSort(arr,n);
    __printarray(arr,n);
}
