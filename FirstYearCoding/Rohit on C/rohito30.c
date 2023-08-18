#include <stdio.h>
void sum_even_odd(int n, int arr[])

{
    int sumeven=0, sumodd=0;
    for (int i=0; i<n; i++)
        if (arr[i]%2==0)
            sumeven += arr[i];
        else
            sumodd +=  arr[i];

    printf("sum of even %d",sumeven);
    printf("\nsum of odd %d",sumodd);
}

int main ()
{
    int n,i;

    printf("\nEnter the size of arr :");
    scanf("%d",&n);
    int arr[n];

    for (int i=0; i<n; i++)
        scanf("%d",&arr[i]);


    sum_even_odd (n,arr);


    return 0;
}
