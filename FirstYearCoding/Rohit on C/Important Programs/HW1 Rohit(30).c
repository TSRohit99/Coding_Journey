 #include <stdio.h>
 #define c 9.2
 int main(){

 int a,b,sum,mul,sub,div;
 float fmul,fsum,fsub;
 char r1,r2,r3,r4;
 a= 10;
 b= 20;
 sum= a+b;
 mul= a*b;
 sub= b-a;
 div= b/a;
 fmul= a*c;
 fsum= a+c;
 fsub= a-c;
 r1='P';
 r2='A';
 r3='S';
 r4='S';


 printf("So here's the ans of the following math of HW1, where a=10, b=20, c=9.2\n\nAddition= %d\nMultiplication= %d\nSubtraction= %d\nDivision= %d\nAnd the floating values are\nAddition= %f\nMultiplication= %f\nSubtraction= %f\n\nCongrates Rohit you are %c%c%c%cED. Thanks for doing the HomeWork" ,sum,mul,sub,div,fsum,fmul,fsub, r1,r2,r3,r4);

 return 0;
 }
