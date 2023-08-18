#include<stdio.h>



int main (){

int r2,c2,r1,c1,i,j,k, sum=0;


    printf("Enter rows and cols for arr ");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and cols for brr ");
    scanf("%d %d",&r2,&c2);

 while(c1!=r2) {

    printf("Enter rows and cols for arr ");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and cols for brr ");
    scanf("%d %d",&r2,&c2);
 }
int arr[r1][c1],brr[r2][c2],crr[r1][c2];

 //arr input

 for(i=0; i<r1; i++) {

    for(j=0; j<c1; j++) {

        printf("arr[%d][%d] :",i,j);
        scanf("%d",&arr[i][j]);
    }
    printf("\n");
 }

 //brr input

 for(i=0; i<r2; i++) {

    for(j=0; j<c2; j++) {

        printf("brr[%d][%d] :",i,j);
        scanf("%d",&brr[i][j]);
    }
    printf("\n");
 }

 //multiplication and displaying

 for (i=0; i<r1; i++){

    for(j=0;j<c2;j++) {

        for (k=0;k<c1; k++) {

            sum+=arr[i][k]*brr[k][j];
        }

        crr[i][j]=sum;
        sum=0;
    }


 }


//printing the matrix

 for (i=0; i<r1; i++){

    for(j=0;j<c2;j++) {
      printf("%d ",crr[i][j]);
    }
  printf("\n");

 }
return 0;
}
