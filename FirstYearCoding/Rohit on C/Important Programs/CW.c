#include <stdio.h>
int main()
{
    char str[100];
    int r1;
    float n1,n2,n3,n4,avg;

//Source (Rohit 30)

    printf ("Enter your name:");
    gets(str);
    printf ("\nEnter your roll:");
    scanf ("%d", &r1);
    printf ("\nEnter your sub1 obtained number:");
    scanf("%f", &n1);
    printf ("\nEnter your sub2 obtained number:");
    scanf("%f", &n2);
    printf ("\nEnter your sub3 obtained number:");
    scanf("%f", &n3);
    n4=n1+n2+n3;
    avg=n4/3;

    printf ("\n\nYour Name: %s",str);
    printf ("\nYour Roll: %d",r1);
    printf ("\nyour obtained numbers : %.1f %.1f %.1f",n1,n2,n3);
    printf ("\nAverage Score:%f",avg);




    return 0;
}
