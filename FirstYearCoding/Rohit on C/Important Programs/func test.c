#include <stdio.h>


int finder_bs (int a, int b)

{

int r;
if (a>b)
  r=a;
  else
  r=b;

  return r;


}

int main() {

int r,a,b;
scanf("%d %d",&a,&b);

r= finder_bs (a,b) ;

printf("Bigger number is = %d",r);


return  0;
}
