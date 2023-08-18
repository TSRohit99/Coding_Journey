
#include <stdio.h>

//source Rohit30

int main ()
{

    float a;
    printf("Enter your Mark : ");
    scanf("%f", &a);
    if ( a>=80 && a<=100)
        printf("You got A+");
    else if ( a>=70 && a<80)
        printf("You got A");
    else if ( a>=60 && a<70)
        printf("You got A-");
    else if ( a>=50 && a<60)
        printf("You got C");
    else if ( a>=40 && a<50)
        printf("You got D ");
    else if (a>=1 && a<40)
        printf("You got f ");


    else
        printf("Invalid input");



    return 0;
}
