#include<stdio.h>

int main () {

        int n,i,t,j,pos=0,res=0;
        scanf("%d",&n);
        for(i=0;i<n;i++) {
            for(j=0;j<3;j++) {
             scanf("%d",&t);
             if(t==1)
             pos++;

        } 
            if(pos>=2)
              res++;

              pos=0;
        }
        printf("%d",res);
    return 0;
}