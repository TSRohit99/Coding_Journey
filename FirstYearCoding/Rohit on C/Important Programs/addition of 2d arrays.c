#include <stdio.h>

int main ()
{

    //input
    int r,c;
    printf("rows for A,B? ");
    scanf("%d",&r);
    printf("columns for A,B? ");
    scanf("%d",&c);
    printf("Enter elements for A: \n");
    int A[r][c],row,col;
    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            printf("A[%d][%d] = ", row,col);
            scanf("%d",&A[row][col]);
        }
        printf("\n");
    }
    //input of B
    printf("Enter elements for B: \n");
    int B[r][c];
    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            printf("B[%d][%d] = ", row,col);
            scanf("%d",&B[row][col]);
        }
        printf("\n");
    }
    printf("\n2d arr A:\n");
    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            printf("%d ",A[row][col]);
        }
        printf("\n");


    }
    printf("\n2d arr B:\n");

    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            printf("%d ",B[row][col]);
        }
        printf("\n");


    }

//calculating
    int C[r][c];
    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            C[row][col]= A[row][col] + B[row][col];
        }
        printf("\n");
    }
    printf("A+B:\n");

    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            printf("%d ",C[row][col]);
        }
        printf("\n");
    }

    return 0;
}
