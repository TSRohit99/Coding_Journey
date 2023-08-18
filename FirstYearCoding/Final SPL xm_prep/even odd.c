#include <stdio.h>

void findEO(int n,int e, int o, int arr[],int even[],int odd[]){

int i;
printf("Even numbers ");
for (i=0; i<e;i++)
    printf(" %d",even[i]);

printf("\nodd numbers ");

for (i=0; i<o;i++)
    printf(" %d",odd[i]);


}

int main (){

int n,i,e=0,o=0;

printf("Enter how many numbers you want to include: ");
scanf("%d",&n);
int arr[n], even[n],odd[n];

for (i=0;i<n;i++){

    scanf("%d",&arr[i]);

    if (arr[i]%2==0) {
     even[e]=arr[i];
    e++;
    }
    else{
        odd[o]=arr[i];
        o++;
    }

}


findEO(n,e,o,arr,even,odd);

return 0;

}
