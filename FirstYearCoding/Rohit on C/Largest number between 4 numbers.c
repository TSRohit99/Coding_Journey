#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    printf("Submit the numbers to find out which one is larger : ");
    scanf("%d\n %d\n %d\n %d", &a, &b, &c, &d);
    if(a>b && a>c && a>d)
    printf("The larger number is : %d",a);
    else if(b>a && b>c && b>d)
    printf("The larger number is : %d",b);
   else if(c>a && c>b && c>d)
    printf("The larger number is : %d",c);
    else if(d>b && d>c && d>a)
    printf("The larger number is : %d",d);
    return 0;
}
