#include<stdio.h>

void resize(int arr[], int n){
     int b= newArray(max(1, n*2));
     for(int i=0; i<n;i++)
     b[i]=a[i];

     a=b;
}

void add(int arr[],int x,int in,int sz_arr)
{
    int len_arr= sizeof(arr)/sizeof(arr[0]);
    if(sz_arr==len_arr)
     resize(arr,sz_arr);
    int temp;
    temp=arr[in];
    arr[in]=x;
    printf("removed value at index %d is: %d\n\n",in,temp);

    for(int i=in+1; i<9; i++)
    {
        int temp2=arr[i];
        arr[i]=temp;
        temp=temp2;
    }

    //printing array

        printf("Manipulated Array : ");
    for(int i=0; i<9; i++)
       printf("%d",arr[i]);

}

int main ()
{
    int x,in,arr[]= {1,2,3,4,5,7,8,8,9};
    printf("Existing Array : arr[]={1,2,3,4,5,7,8,8,9}\nEnter the Value and Index (where the value will be stored) :");
    scanf("%d %d",&x,&in);
    int sz_arr=9;

    add(arr,x,in,sz_arr);

}
