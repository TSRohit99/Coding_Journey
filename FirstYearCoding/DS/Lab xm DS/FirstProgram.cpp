#include<stdio.h>


class ArrayStack{
public :
    ArrayStack();
    int Size();
    int Get(int i);
    int Set(int i,int x);
    void Add(int i,int x);
    int Remove(int i);
    void Push (int x);
    int  pop();
    void __printarray();
    void __Intializer();
    //void ArrayCopy();
    int *arr;

private :
    //int *arr;
    //int *arr2;
    int n;
    int __len;
    void Resize();




};

ArrayStack::ArrayStack(){
    __len=5;
    arr= new int[__len];
    n=0;

}

int ArrayStack::Size(){
    return n;

}

int ArrayStack:: Get(int i){
    return arr[i];

}

int ArrayStack::Set(int i, int x){
    int prev = arr[i];
    arr[i]=x;
    return prev;

}

void ArrayStack::Add(int i,int x){
    if(n==__len)
       Resize();

       for(int j=n+1; j>i; j--){
            arr[j]=arr[j-1];

       }
       arr[i]=x;
       n++;
}

int ArrayStack::Remove(int i){
        int prev= arr[i];
        for(int j=i; j<n; j++){
            arr[j]=arr[j+1];
        }

        n--;
        if(3*n<=__len)
            Resize();

        return prev;

}

void ArrayStack::Push(int x){
    if(n==__len)
       Resize();
       arr[n]=x;
       n++;

}

int ArrayStack::pop(){
    int prev= arr[n-1];
    arr[n-1]=0;
        n--;
        if(3*n<=__len)
            Resize();

        return prev;

}

//helper function

void ArrayStack::__printarray(){
    printf("[ ");
    for(int i=0;i<n;i++)
     printf("%d ",arr[i]);
     printf("]\n");


}

void ArrayStack:: Resize(){
  int Max=1;
  if(3*n>1)
    Max=3*n;

  int *b= new int [Max];

  for(int i=0; i<n; i++){
    b[i]=arr[i];
  }

  __len=Max;

}

void ArrayStack::__Intializer(){
    for(int i=0; i<__len; i++)
        arr[i]=i;
    n=__len;
}

void ArrayCopy (int arr[],int arr2[]){
    ArrayStack ob2;
    int n= ob2.Size();
    for(int i=n-1; i>=0;i--)
     arr2[i]=ob2.pop();

     printf("[ ");
    for(int k=0;k<n;k++)
     printf("%d ",arr2[k]);
     printf("]\n");


}


int main (){

    ArrayStack ob;

    ob.__printarray();
    ob.__Intializer();
    ob.__printarray();
    ob.Add(3,10);
    ob.__printarray();
    ob.Push(99);
    ob.__printarray();
    ob.pop();
    ob.__printarray();



int n2=ob.Size();
int arr2[n2];

ArrayCopy(ob.arr,arr2);

printf("[ ");
    for(int i=0;i<n2;i++)
     printf("%d ",arr2[i]);
     printf("]\n");



return 0;
}
