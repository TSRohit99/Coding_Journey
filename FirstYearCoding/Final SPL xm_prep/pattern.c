#include<stdio.h>
    #include<string.h>


    int main()
    {
       int i,j,r,k;

    for (i=1; i<=5; i++) // right angle triangle

    {


    for (k=1; k<=i; k++)
    printf("*");



    printf("\n");



    }

    for (i=1; i<=5; i++) //left triangle

    {

   for (j=1; j<=5-i; j++)
    printf(" ");

    for (k=1; k<=i; k++)
    printf("*");



    printf("\n");



    }

    for (i=4; i>=1; i--) // kind of ulta right pyramid

    {

   for (j=1; j<=5-i; j++) //Narikel sondesh
    printf(" ");

    for (k=1; k<=i; k++)
    printf("%c",i+64);



    printf("\n");



    }

    for (i=1; i<=5; i++) // genuine pyramid

    {

   for (j=1; j<=5-i; j++)
    printf(" ");

    for (k=1; k<=(2*i)-1; k++)
    printf("*");



    printf("\n");



    }


    for (i=5; i>=1; i--) //ulta pyramid

    {

   for (j=1; j<=5-i; j++)
    printf(" ");

    for (k=1; k<=(2*i)-1; k++)
    printf("R");



    printf("\n");



    }





       return 0;
            }
