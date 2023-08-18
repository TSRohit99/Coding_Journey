#include<stdio.h>

int main()
{

    int i,n,count=0, count1=0;


    printf("Enter the total number of students in your class :");
    scanf("%d",&n);
    char c[n];


    for (i=0; i<n; i++)
    {
        printf("Is roll no %d is present? (type 'y' if they are absent then type 'n')\n",i+1);
        scanf("%s",&c[i]);

        if(c[i]=='y')
            count++;
        else
            count1++;
    }


    printf("\n\nTotal Students : %d",n);
    printf("\nPresent Students in class : %d",count);
    printf("\nStudents absent in class : %d",count1);

    return 0;
}
