#include <stdio.h>


int fibo(int a) {

if(a==1||a==0)
    return a;

    //int fac1= fac(a-1);
    //int facto=fac(a-1)*a;
    //return facto;

    int fibor= fibo(a-1)+fibo(a-2);
    //printf("%d ", fibor);
    return fibor;

}

int main(){


int r = fibo(6);

printf("%d",r);

return 0;
}
