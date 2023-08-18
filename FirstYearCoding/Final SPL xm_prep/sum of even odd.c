#include <stdio.h>


int main (){

int n,i,evensum=0,oddsum=0;

printf("Enter how many numbers you want to include: ");
scanf("%d",&n);
int arr[n];

for (i=0;i<n;i++){

    scanf("%d",&arr[i]);

    if (arr[i]%2==0) {
     evensum+=arr[i];
    }
    else{
       oddsum+=arr[i];
    }

}


printf("sum of even %d\nSum of odd %d", evensum,oddsum);


return 0;

}
