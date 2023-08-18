#include <stdio.h>

int main() {

int i,b, count=0;
char str[100] ;
    // Enter anything but add * before what you want to print
scanf("%[^\n]s", str);

while (str[i]!= '*')
{
i++;

if(i>strlen(str))
    break;
}


if (i<strlen(str)) {
for (b=i+1; str[b]!='\0'; b++){

printf("%c", str[b]);

count++;

}
}

printf("\nTotal words after *(including spaces) : %d", count);

return 0;
}
