#include <stdio.h>

float sum_of_arr (int n, float arr[])
{
    float sum = 0;
    for (int i=0; i<n; i++)
        sum= sum+arr[i];
    return sum;
}

int main()
{
    int n,i;
    printf("Enter the size of arr :");
    scanf("%d",&n);
    float arr[n];
    for (int i=0; i<n; i++)
            scanf("%f",&arr[i]);

    float sum = sum_of_arr(n,arr);

    printf("\nTotal value of arr is: %.2f",sum);


    return 0;

}
