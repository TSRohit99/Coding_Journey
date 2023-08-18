#include<stdio.h>
#include<stdlib.h>


class ArrayStack{
public:
    ArrayStack();
    int Size();
    int Get(int i);
    int Set(int i, int x);
    void Add(int i, int x);
    int Remove(int i);

    void __printArray();
    void __initializer();
    int __length();

private:
    int __len;
    int *a;
    int n;
    void Resize();
    void __indexValidityCheck(int i);
};


/*******
* Data Structure Methods
********/
ArrayStack::ArrayStack(){
    __len = 1;
    a = new int[__len];
    n = 0;
}

int ArrayStack::Size(){
    return n;
}

int ArrayStack::Get(int i){
    __indexValidityCheck(i);
    return a[i];
}

int ArrayStack::Set(int i, int x){
    __indexValidityCheck(i);
    int prev = a[i];
    a[i] = x;
    return prev;
}

void ArrayStack::Add(int i, int x){
    __indexValidityCheck(i);
    if(Size() == __len)
        Resize();
    for(int j = n-1; j>= i; j--)
        a[j+1] = a[j];
    a[i] = x;
    ++n;
}

int ArrayStack::Remove(int i){
    __indexValidityCheck(i);
    int prev = a[i];

    for(int j = i+1; j < n; j++)
        a[j-1] = a[j];
    --n;
    if(__len >= 3*n)
        Resize();
    return prev;
}





/*******
* Helper Methods
********/
void ArrayStack::Resize(){
    int __max = 2 * n;
    if( 1 > __max )
        __max = 1;

    int *b = new int[__max];
    for(int i = 0; i<= n-1; i++)
        b[i] = a[i];
    a = b;

    __len = __max;
}

void ArrayStack::__initializer(){
    __len = 5;
    for(int i=0; i<__len; i++)
        a[i] = i*i;
    n = 5;
}

void ArrayStack::__printArray(){
    printf("[ ");
    for(int i=0; i<Size(); i++)
        printf("%d ", Get(i));
    printf("]\n");
}

int ArrayStack::__length(){
    return __len;
}

void ArrayStack::__indexValidityCheck(int i){
    if( (i < 0) || (i >= Size()) ){
        printf("Invalid");
    }
}




/*******
* Main Function
********/
int main(){
    ArrayStack st;
    st.__printArray();

    st.__initializer();
    st.__printArray();

    int i = 3;
    printf("Checking Get at Index %d: %d\n", i, st.Get(i));

    int x = 15;
    int prev = st.Set(i, 15);
    printf("\n\nAfter Applying Set on Index: %d with Data: %d\n", i, x);
    printf("Previous Value was: %d, and Current Array:\n", prev);
    st.__printArray();

    printf("\n\n");
    printf("Previous Data: ");
    st.__printArray();
    st.Add(2, 42);
    printf("Current Data: ");
    st.__printArray();
    printf("Length of the Array is: %d\n", st.__length());

    printf("\n\n");
    printf("Previous Data: ");
    st.__printArray();
    prev = st.Remove(4);
    printf("Removed Data :%d\n",prev);
    printf("Current Data: ");
    st.__printArray();
    printf("Length of the Array is: %d\n", st.__length());

}
