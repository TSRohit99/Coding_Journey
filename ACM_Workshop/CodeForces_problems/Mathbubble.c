#include<stdio.h>
#include<string.h>

int main (){
    char str[100];

    scanf("%s",str);
    int n= strlen(str);

    int i,j;
    for(i=0;i<n; i=i+2) {
        for(j=0;j<=n-2;j=j+2){
            if(str[j]>str[j+2]){
                int temp = str[j];
                str[j]=str[j+2];
                str[j+2]=temp;
            }
        }
    }

    printf("%s",str);


    return 0;
}
