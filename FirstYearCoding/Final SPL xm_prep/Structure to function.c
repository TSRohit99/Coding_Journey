#include<stdio.h>

typedef struct{

int day,month,year;

}date;

void func(date today[]) {

for (int i=0; i<2; i++) {

printf("%d %d %d", today[i].day,today[i].month,today[i].year);
}
//printf("%d/ %d/ %d", today.day,today.month,today.year);


}
void func2(date *today) {
printf("using pointer ");
printf("%d/ %d/ %d", today->day,today->month,today->year);


}

int main (){


date today[2];

for (int i=0; i<2; i++) {
printf("Enter date");
scanf("%d %d %d", &today[i].day,&today[i].month,&today[i].year);
}
func(today);
 func2(&today);




return 0;
}
