#include<stdio.h>

int main()
{

     int roll,mark;
    float pt1,pt2,pt3;
    char line[20];

    scanf("%[^\n]s",line);

    scanf("%d\n %d", &roll, &mark);
    scanf("%f\n %f", &pt1,&pt2);
    pt3=pt1+pt2;


    printf("Name= %s\n Roll = %d\n mark= %d\n pt1+pt2 = %.2f ", line,roll,mark,pt3);




    return 0;
}
