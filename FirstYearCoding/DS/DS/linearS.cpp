#include<stdio.h>

class Algo{
 public:
    Algo();
   int LinearSearch(int);
   int BinarySearch(int, int);
   void BubbleSort();
   void __printArray();
   void __printArray2();

private:
int *arr;
int *arr2;
int n=5;
int key;

}

Algo::Algo(int x){
    key=x;

}

int Algo::LinearSearch(){
    int i=0;
    while(i<n & arr[i]!=key){
        i++;
    }

    if(i<n)
      return i+1;
    else
      return -1;
}

int Algo::BinarySearch(int beg, int end){
    if(beg>end)
        return -1;

    int mid=(beg+end)/2;
    if(arr[mid]==key)
      return mid+1;
      else if (key>arr[mid])
        return BinarySearch(mid+1,end);
        else
        return BinarySearch(beg,mid-1);
}

void Algo::BubbleSort(){
    int i,j;
    for(i=0; i<=n-2;i++){
        for(j=n-1;j>=i+1; j++){
            if(arr2[j]<arr2[j-1]){
                int temp=arr2[j];
                arr2[j]=arr2[j-1];
                arr2[j-1]=arr2[j];
            }
        }
    }
}

void Algo::__printArray(){
    printf("[ ");
    for(int i=0; i<n; i++)
    printf("%d ",arr[i]);
    printf("]");

}
void Algo::__printArray2(){
    printf("[ ");
    for(int i=0; i<n; i++)
    printf("%d ",arr2[i]);
    printf("]\n");

}

int main (){

    Algo ag;
    ag.__printArray2();
    ag.BubbleSort();
     ag.__printArray2();



    return 0;

}
