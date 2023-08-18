#include<stdio.h>
#include<stdexcept>

class ArrayQueue {

public:
    ArrayQueue();
    void Enqueue(int i);
    int Dequeue();
    void __PrintArray();
    void __intializer();
    int __len;


private:
    int *arr;
    int n;

    int j;
    void Resize();

};
ArrayQueue:: ArrayQueue(){
        __len=5;
        j=0;
        n=0;
        arr= new int[__len];

}

void ArrayQueue::Enqueue (int x){

    if(n+1>__len)
        Resize();
    arr[(j+n)%__len]= x;
    n++;
}

int ArrayQueue::Dequeue(){
    int prev=arr[j];
    j=(j+1)%__len;
    n--;

    if(__len>=3*n)
        Resize();

    return prev;
}



//Helper Functions

void ArrayQueue::Resize(){
    int Max=1;
    if(2*n>Max)
        Max=2*n;
    int* b= new int[Max];
    for(int k=0; k<n; k++)
        b[k]=arr[(j+k)%__len];

     arr=b;
     j=0;
     __len=Max;
}

void ArrayQueue::__intializer(){
    for(int i=0;i<__len;i++)
        arr[i]=i;
    n=__len;
}

void ArrayQueue::__PrintArray(){
    printf("[ ");
    for(int i=0; i<n; i++)
        printf("%d ",arr[(j+i)%__len]);
    printf("]\n\n");

}



int main (){

ArrayQueue aq;

aq.__PrintArray();

aq.__intializer();

aq.__PrintArray();

printf("after Enqueue 30\n");
aq.Enqueue(30);
aq.__PrintArray();
printf("Size of array : %d\n", aq.__len);

printf("\nAfter Dequeue 1 time\n");
int prev = aq.Dequeue();
printf("Removed data of the array : %d\n",prev);
aq.__PrintArray();
printf("Size of array : %d\n", aq.__len);

printf("\nAfter Dequeuing again\n");
int prev2 = aq.Dequeue();
printf("Removed data of the array : %d\n",prev2);
aq.__PrintArray();
printf("Size of array : %d", aq.__len);

aq.Enqueue(30);
aq.__PrintArray();
aq.Enqueue(31);
aq.__PrintArray();
aq.Enqueue(32);
aq.__PrintArray();
aq.Enqueue(33);
aq.__PrintArray();
aq.Enqueue(34);
aq.__PrintArray();
aq.Enqueue(35);
aq.__PrintArray();
aq.Enqueue(35);
aq.__PrintArray();
printf("Size of array : %d", aq.__len);
aq.Dequeue();
aq.Dequeue();
aq.Dequeue();
aq.Dequeue();
aq.Dequeue();
aq.Dequeue();
aq.Dequeue();
aq.Dequeue();
aq.Dequeue();
aq.Dequeue();
aq.Dequeue();
aq.Dequeue();
aq.__PrintArray();
printf("Size of array : %d", aq.__len);

}
