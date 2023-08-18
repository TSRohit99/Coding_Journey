#include<stdio.h>

void remove(int arr[],int in,int n)
{
    int temp;
    temp=arr[in];
    printf("\nRemoved value at index %d is: %d\n\n",in,temp);

    for(int i=in; i<n; i++)
    {   
        
        arr[i]=arr[i+1];
        
    }

    //printing array

        printf("Manipulated Array : ");
    for(int i=0; i<n-1; i++)
       printf("%d",arr[i]);

}

int main ()
{
    int x,in,arr[]= {1,2,3,4,5,7,8,9};
    int asize=8;
    printf("Existing Array : arr[]={1,2,3,4,5,7,8,9}\nEnter the Index you want to remove (Value will be removed and other elements will be adjusted) :");
    scanf("%d",&in);

    remove(arr,in,asize);

}
