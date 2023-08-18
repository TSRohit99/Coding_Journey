#include <stdio.h>
#include <string.h>

int main() {

int n,i;
char word[100];

scanf("%d", &n);
scanf(" %[^\n]s", word);


int r= strlen(word);


if (r>n){

printf("%c%d%c", word[0],(r-2),word[r-1]);

//for(i=0;i<strlen(word); i++)



}

else
    printf("%s", word);







return 0;
}
