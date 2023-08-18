#include<bits/stdc++.h>

using namespace std;

int main (){
    int num=56317670, temp,sz=0;
    int arr[10];//={10};
    for(int i=0; i<10; i++)
      arr[i]=10;

    while(num!=0){
        temp=num%10;
        num/=10;
        arr[temp]=temp;

    }

    for(int i=0; i<10; i++){
        if(arr[i]!=10){
        cout<<arr[i];
        sz++;
        }
        
          

    }

    cout<<"\nTotal distinct numbers "<<sz;
}