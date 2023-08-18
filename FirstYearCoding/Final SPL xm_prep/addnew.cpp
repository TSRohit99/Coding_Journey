#include <stdio.h>
#include <stdlib.h>

void resize_arr(int arr[], int n){

        int* b= new int[5];
        for(int i=0; i<n; i++)
            b[i]=arr[i];

            b[3]=20;
             b[4]=21;
              b[5]=22;
               b[6]=23;

        delete[]arr;
        arr=b;
        b=NULL;

         for(int i=0; i<7; i++)
           printf("%d",arr[i]);


int sz = (sizeof(arr)/sizeof(arr[0]));
printf("Current array size : %d\n\n", sz);



}



int main (){

int x,in, arr[]={1,2,3};
int n =3;
printf("Current array arr[]={1,2,3}; Enter the value and index : ");
//scanf("%d %d",&x,&in);


int sz = (sizeof(arr)/sizeof(arr[0]));
printf("Current array size : %d\n\n", sz);



if(n==sz){
    resize_arr(arr,n);

}


return 0;
}
