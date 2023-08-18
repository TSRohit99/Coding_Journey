#include<stdio.h>

int main () {

        int n,res=0;
        char ch[10];
        scanf("%d", &n);
        for(int i=0;i<n;i++)
         {
            scanf("%s",ch);
            if(ch[0]=='+' || ch[2]=='+')
            res++;
            else
            res--;
        

         }
        printf("%d",res);
    return 0;
}