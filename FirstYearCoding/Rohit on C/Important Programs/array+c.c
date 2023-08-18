 #include <stdio.h>

 int main (){

 int i,n,k,j,con=0;
 scanf("%d", &n);
 int a[n] , prm[n];

 for(i=0; i<n; i++)
 {
 scanf("%d",&a[i]);
  }
for(i=0; i<n; i++)
{

prm[i]=0;


 }

for(i=0; i<n;i++) {
 for(k=2; k<n; k++)
 {
     if (a[i]%k==0)
     {
         //prm[i]=a[i];
         con=1;
         break;

     }



 }
}
printf("prime numbers :");
 for(j=0; j<n; j++)
 {
     if(con==0)
 printf("%d ",a[j]);


 }




 return 0;
 }
