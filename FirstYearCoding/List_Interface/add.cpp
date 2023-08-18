#include<stdio.h>

void add(int arr[],int x,int in)
{
   
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
    int x,in,arr[]= {1,2,3,4,5,7,8,9};
    printf("Existing Array : arr[]={1,2,3,4,5,7,8,8,9}\nEnter the Value and Index (where the value will be stored) :");
    scanf("%d %d",&x,&in);
    
    add(arr,x,in);

}
