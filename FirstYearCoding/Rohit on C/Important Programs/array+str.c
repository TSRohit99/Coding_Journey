#include <stdio.h>

float sum_of_arr (int n, float arr[])
{
    float sum = 0;
    for (int i=0; i<n; i++)
        sum= sum+arr[i];
    return sum;
}

int szof_str(char str[])
{
    int length = strlen(str);

    return length;
}

int main ()
{

    int clicked;
    printf("1. Calculate the sum of array\n2. Calculate the sum of characters in a string\n\nEnter your choice :");
    scanf("%d",&clicked);

    switch (clicked)
    {

    case 1:
    {

        int n,i;
        printf("\nEnter the size of arr :");
        scanf("%d",&n);
        float arr[n];
        for (int i=0; i<n; i++)
            scanf("%f",&arr[i]);

        float sum = sum_of_arr(n,arr);

        printf("\nTotal value of arr is: %.2f",sum);

        break;

    }

    case 2:

    {
        char str[100];
        printf("\nEnter any line to find out length: ");
        scanf(" %[^\n]s", &str);

        int sum2 = szof_str(str);

        printf("\nTotal words in the para(including spaces): %d",sum2);
        printf("\n");

        break;

    }

    default:
        printf("Rehhh bai kali 1 or 2 number type koros na!!! ita aje baje type korre kne!");
    }
    return 0;

}
