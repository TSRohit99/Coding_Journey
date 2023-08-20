#include<stdio.h>

void SN(int num){
    int temp;
    int sum=0;
    while(num!=0){
        temp= num%10;
        num=num/10;
        sum=sum+temp;
        //112temp=0;
    }

    printf("%d", sum);
}



int main (){
    int num;
    scanf("%d", &num);
    SN(num);
}