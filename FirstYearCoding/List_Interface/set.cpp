#include<stdio.h>

void set(int arr[],int x,int in)
{
    
    int temp;
    temp=arr[in];
    arr[in]=x;
    printf("The previous value at %d index was: %d\n\n",in,temp);

   

    //printing array

     printf("Updated Array : ");
    for(int i=0; i<9; i++)
       printf("%d",arr[i]);

}

int main ()
{
    int x,in,arr[9]= {1,2,3,4,5,7,8,9};
    printf("Existing Array : arr[]={1,2,3,4,5,7,8,9}\nEnter the Value and Index (where the value will be stored) :");
    scanf("%d %d",&x,&in);

    set(arr,x,in);

}
