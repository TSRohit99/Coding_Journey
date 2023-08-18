#include <stdio.h>

typedef struct {

int d,m,y;

}date;

void print(date today) {

printf("%d-%d-%d", today.d,today.m,today.y);

}

void printadd(date *today) {

 printf("\nThrough pointer");
printf("\n%d-%d-%d", today->d,today->m,today->y);

}

int main () {

    date today;
    printf("Enter Day ");
    scanf("%d", &today.d);
    printf("\nEnter Month ");
    scanf("%d", &today.m);
    printf("\nEnter Year ");
    scanf("%d", &today.y);

    print(today);

    printadd(&today);

return 0;
}
