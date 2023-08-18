#include<stdio.h>

int main () {

    int n,k,i,pos=0;
    scanf("%d %d", &n, &k);
    int arr[n-1];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
       
    }
    int v=arr[k-1];
    for(i=0;i<n;i++) {
        if (v<=arr[i] && arr[i]>0)
            pos++;
          
     }


        printf("%d",pos);


    return 0;
}