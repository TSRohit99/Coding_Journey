#include<stdio.h>
#include<string.h>

int main () {
      char word[100];
      int n,i;
        scanf("%d", &n);
        
        
        for(i=0;i<n;i++) {
            scanf(" %[^\n]s", word);
            int r=strlen(word);
        if(r>10)
            printf("%c%d%c\n",word[0],r-2,word[r-1]);

        else
           printf("%s\n", word);
        }
    return 0;
}