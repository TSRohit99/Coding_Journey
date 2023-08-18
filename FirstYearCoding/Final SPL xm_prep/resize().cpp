#include<stdio.h>


void resize(int arr[], int arr_sz){

       //int* temp = new int[2*arr_sz];
int b[2*arr_sz];
        int* temp = b[2*arr_sz];
       arr=temp;


}

int main (){


    int arr[]={1,2,3,4,5,6,7};
    int arr_sz=sizeof(arr)/sizeof(arr[0]);
    printf("Initial Array cap = %d\n",arr_sz);

    resize(arr,arr_sz);
     int arr_sz2=sizeof(arr)/sizeof(arr[0]);
    printf("Resized Array cap = %d",arr_sz2);



return 0;
}
