#include <stdio.h>

//source Rohit30
int main ()
{


    int a,b,c;
    printf("Enter 3 numbers :");
    scanf("%d\n %d\n %d", &a,&b,&c);
    if (a>b && a>c)
        printf("Largest num : %d", a);
    else if (b>a && b>c)
        printf("Largest num : %d", b);
    else if (c>a && c>b)
        printf("Largest num : %d", c);








    return 0;
}
