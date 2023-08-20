#include<stdio.h>


class ArrayDeque{
public :
    ArrayDeque();
    int Size();
    int Get(int i);
    int Set(int i,int x);
    void Add(int i,int x);
    int Remove(int i);
    void __printarray();
    void __Intializer();


private :
    int *arr;
    int n;
    int __len;
    void Resize();
    int j;




};

ArrayDeque::ArrayDeque(){
    __len=5;
    arr= new int[__len];
    n=0;
    j=0;

}

int ArrayDeque::Size(){
    return n;

}

int ArrayDeque:: Get(int i){
    return arr[(j+i)%__len];

}

int ArrayDeque::Set(int i, int x){
    int prev = arr[(j+i)%__len];
    arr[(j+i)%__len]=x;
    return prev;

}

void ArrayDeque::Add(int i,int x){
    if(n==__len)
       Resize();

       if (i<n/2) {
        j=(j-1)%__len;

        for(int k=0; k<=i-1; k++)
            arr[(j+k)%__len]=arr[(j+k+1)%__len];
        }

    else {
        for(int k=n; k>=i+1; k--)
            arr[(j+k)%__len]=arr[(j+k-1)%__len];

    }
        arr[(j+i)%__len] = x;
        n++;

    }



int ArrayDeque::Remove(int i){
    int k;
        int prev= arr[(j+i)%__len];
         if (i<(n/2)) {

        for(k=i; k>=1; k--)
            arr[(j+k)%__len]=arr[(j+k-1)%__len];
            j=(j+1)%__len;
        }

    else {
        for(k=i; k<=n-2; k++)
            arr[(j+k)%__len]=arr[(j+k+1)%__len];

    }


        n--;
        if(3*n<=__len)
            Resize();

        return prev;

}


//helper function

void ArrayDeque::__printarray(){
    printf("[ ");
    for(int i=0;i<n;i++)
     printf("%d ",arr[(j+i)%__len]);
     printf("]\n");


}

void ArrayDeque:: Resize(){
  int Max=1;
  if(3*n>1)
    Max=3*n;

  int *b= new int [Max];

  for(int i=0; i<n; i++){
    b[i]=arr[(j+i)%__len];
  }
arr=b;
j=0;
  __len=Max;

}

void ArrayDeque::__Intializer(){
    for(int i=0; i<__len; i++)
        arr[i]=i;
    n=__len;
}


int main (){

ArrayDeque ob;

ob.__Intializer();
ob.__printarray();


printf("%d", ob.Remove(3));
ob.__printarray();

ob.Add(0,30);
ob.__printarray();
ob.Add(0,31);
ob.__printarray();
printf("%d", ob.Get(3));



}
