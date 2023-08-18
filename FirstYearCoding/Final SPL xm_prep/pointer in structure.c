#include<stdio.h>

typedef struct  {

 int a;
 char ch[100];


}test;

void fun(test* r)
{


printf("%d",r->a);
   printf("%s",r->ch);
}



int main () {


test r;
r.a=10;
strcpy (r.ch,"Rohit");




fun(&r);
return 0;

}
