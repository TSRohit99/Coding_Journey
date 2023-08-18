#include <stdio.h>

int main (){

int mat[20][20] ,mat2[20][20], mat3[20][20],i,k,r,c;

printf("rows and cols for matrix :");
scanf("%d%d", &r,&c);


for (i=0; i<r; i++) {

    for (k=0; k<c; k++) {
    printf("Mat1[%d][%d]: ",i,k);
    scanf("%d", &mat[i][k]);


}
printf("\n");
}


for (i=0; i<r; i++) {

    for (k=0; k<c; k++) {
    printf("Mat 2[%d][%d]: ",i,k);
    scanf("%d", &mat2[i][k]);


}
printf("\n");
}

printf("Addition of Mat1 & Mat2\n");
for (i=0; i<r; i++) {

    for (k=0; k<c; k++) {

    mat3[i][k] = mat[i][k]+mat2[i][k];
    printf("%d ",mat3[i][k]);
    }
 printf("\n");
}




return 0;
}
