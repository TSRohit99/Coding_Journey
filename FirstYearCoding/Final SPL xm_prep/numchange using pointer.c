#include <stdio.h>

void change(int* pa, int* pb){

int temp = *pa;
    *pa= *pb;
    *pb=temp;

}

int main (){

int a=10,b=20;
int* pa=&a;
int* pb=&b;

change(pa,pb);

printf("a= %d\nb= %d",a,b);

return 0;
}
