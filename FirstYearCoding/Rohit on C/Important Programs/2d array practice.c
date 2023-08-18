#include <stdio.h>

//regular 2d array
/*int main () {

int i,j, arr[3][3]= {{2,3,4}, {3,4,5}, {9,9,9}};

for(i=0; i<3; i++)
{
    for(j=0; j<3; j++)
    {
        printf("%d ", arr[i][j]);


    }
     printf("\n");
} */

//dynamic 2d array input & output


int main ()
{

    //input
    int r,c;
    printf("how many rows you want? ");
    scanf("%d",&r);
    printf("how many columns you want? ");
    scanf("%d",&c);

    int arr[r][c],row,col;

    for(row=0; row<r; row++)
    {
        for(col=0; col<c; col++)
        {
            printf("Arr[%d][%d] = ", row,col);
            scanf("%d",&arr[row][col]);
        }
        printf("\n");

    }
//output
printf("2 d arr:");

    for(row=0; row<r; row++)
    {   printf("\t");
        for(col=0; col<c; col++)
        {
            printf("%d ",arr[row][col]);
        }
        printf("\n");
    }

    return 0;
}
