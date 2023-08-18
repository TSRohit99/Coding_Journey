#include <stdio.h>

int main()
{


    //forloop
    /* int i;
     for (i=1; i<=1000; i--)
     {
         printf("Hello world! no of times : %d\n",-i);
     } */

//while loop

    /* int i=1;
    while(i<=10)

    {
         printf("Hello world! no of times : %d\n",i);
         i++ :


    } */

//do while
    /* int i=1;

     do

     {
         printf("Hello world! no of times : %d\n",i);
         i++ ;


     }

     while(i<=10); */




    int i;
    for(i=1; i<=20; i++)

    {
        if (i%2!=0)

            continue;
        printf("%d\n",i);


        if(i>=12)
            break;
    }




    return 0;


}
