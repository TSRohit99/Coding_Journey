#include<stdio.h>

int binarysearchREC(int arr[], int key,int beg,int asize) {
  if(beg>asize)
    return -1;
    int mid=(beg+asize)/2;
    if(arr[mid]==key)
    return mid+1;
  else if(arr[mid]>key)
    return binarysearchREC(arr,key,beg,mid-1);
    else if (arr[mid]<key)
    return binarysearchREC(arr,key,mid+1,asize);




}

int main (){

int arr[]={1,2,3,4,5,6,7,8,9,11,12,34,56,78,90};

int key;
printf("Enter Key: arr[]={1,2,3,4,5,6,7,8,9,11,12,34,56,78,90};   ");
scanf("%d",&key);
int beg=0,asize=15;

int res=binarysearchREC(arr,key,beg,asize);

if(res==-1)
    printf("Data not found");
else
    printf("position of the Data : %d\n Index of Data arr[%d]",res,res-1);

return 0;
}
