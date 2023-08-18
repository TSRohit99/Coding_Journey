#include<stdio.h>
#include<stdexcept>

class ArrayStack {

public:

    ArrayStack(); //init
    int Size();
    int Get(int i);
    int Set(int i,int x);
    void Add(int i, int x);
    int Remove(int i);
    void __PrintArray();
    void __IndexValCheck(int i);
    void __initializer();
    int __length();

private:

    int n;
    int __len;
    int *arr;
    void Resize();


};

ArrayStack :: ArrayStack (){

         __len=5;
         arr= new int[__len];
         n=0;
}

int ArrayStack :: Size (){
        return n;
}

int ArrayStack :: Get(int i){
    __IndexValCheck(i);
        return arr[i];
}

int ArrayStack ::Set (int i, int x){
    __IndexValCheck(i);
        int prev = arr[i];
        arr[i]=x;
        return prev;
}



void ArrayStack ::Add(int i, int x){
    __IndexValCheck(i);

        if(n==__len)
            Resize();

        for(int j=n; j>i; j--)
            arr[j]=arr[j-1];

            arr[i]=x;
        n++;
}

int ArrayStack :: Remove(int i){
    __IndexValCheck(i);

        int prev = arr[i];

        for(int j=i; j<n-1; j++)
            arr[j]=arr[j+1];

         if(__len>=3*n)
            Resize();
           n--;

        return prev;
}

//Helper Function

void ArrayStack::__IndexValCheck(int i){
    if(i<0 || i>n)
       throw std:: invalid_argument("Invalid Index");
}

int ArrayStack:: __length() {
 return __len;
}



void ArrayStack ::__PrintArray(){

       printf("[ ");
       for(int i =0; i<n; i++)
        printf("%d ",arr[i]);
       printf("]\n\n");

}

void ArrayStack ::__initializer(){


       for(int i =0; i<5; i++)
           arr[i]=i;

           n=5;


}

void ArrayStack ::Resize(){

    int Max=1;
       if(2*n>Max)
         Max=2*n;

    int* b= new int[Max];
    for(int i=0; i<n; i++)
        b[i]=arr[i];
    arr=b;

    __len=Max;

}




int main (){

ArrayStack st;
    st.__PrintArray();

    st.__initializer();
    st.__PrintArray();

    int i = 3;
    printf("Checking Get at Index %d: %d\n", i, st.Get(i));

    int x = 15;
    int prev = st.Set(i, 15);
    printf("\n\nAfter Applying Set on Index: %d with Data: %d\n", i, x);
    printf("Previous Value was: %d, and Current Array:\n", prev);
    st.__PrintArray();

    printf("\n\n");
    printf("Previous Data: ");
    st.__PrintArray();
    st.Add(20, 42);
    printf("Length of the Array is: %d\n", st.__length());
    printf("Current Data: ");
    st.__PrintArray();


    printf("\n\n");
    printf("Previous Data: ");
    st.__PrintArray();
    prev = st.Remove(3);
    printf("Removed Data :%d\n",prev);
    printf("Current Data: ");
    st.__PrintArray();
    printf("Length of the Array is: %d\n", st.__length());





}
