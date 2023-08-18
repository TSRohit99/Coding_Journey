#include<stdio.h>

class ArrayQ
{
public:
    ArrayQ();
    void Enqueue(int x);
    int Dequeue();
    void __printarray();
    void __Intializer();

private:

    int* arr;
    int j;
    int n;
    int __len;
    void Resize();

};

ArrayQ::ArrayQ()
{
    j=0;
    n=0;
    __len=2;
    arr= new int[__len];

}

void ArrayQ::Enqueue(int x)
{
    if(n+1>__len)
        Resize();
    arr[(j+n)%__len]= x;
    n++;
}

int ArrayQ::Dequeue()
{
    int prev=arr[j];
    j=(j+1)%__len;
    n--;
    if(3*n<__len)
        Resize();

    return prev;
}

void ArrayQ:: Resize()
{
    int Max=1;
    if(3*n>1)
        Max=3*n;

    int *b= new int [Max];

    for(int i=0; i<n; i++)
    {
        b[i]=arr[(j+i)%__len];
    }
    arr=b;
    j=0;
    __len=Max;

}

//Helper Function

void ArrayQ::__printarray()
{
    printf("[ ");
    for(int i=0; i<n; i++)
        printf("%d ", arr[(j+i)%__len]);
    printf("]\n");

}

void ArrayQ:: __Intializer()
{

    for(int i=0; i<__len; i++)
        arr[i]=i;
    n=__len;


}


int main ()
{

    ArrayQ ob;
    ob.__Intializer();
    ob.__printarray();
    ob.Enqueue(30);
    ob.Enqueue(30);
    ob.Enqueue(40);
    ob.Enqueue(50);
    ob.__printarray();
    ob.Dequeue();
    ob.__printarray();
    ob.Dequeue();
    ob.Dequeue();
    ob.Dequeue();
    ob.__printarray();
    ob.Dequeue();
    ob.Dequeue();
    ob.__printarray();

}
