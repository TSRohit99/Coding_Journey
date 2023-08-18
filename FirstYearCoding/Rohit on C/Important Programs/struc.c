#include <stdio.h>

typedef struct {


   unsigned int ID;
    float GPA;
    char name[30];


} neub;

int main (){

int n,i;
printf("How many students are in line :");
scanf("%d", &n);
neub st[n];

for(i=0; i<n; i++){

   printf("\nHSC Reg id of student %d :",i+1);
    scanf("%d", &st[i].ID);
   printf("\nHSC result in GPA of student %d :",i+1);
    scanf("%f", &st[i].GPA);
   printf("\nName of student %d :",i+1);
    scanf(" %[^\n]s", st[i].name);

}

for(i=0; i<n; i++){

   printf("\n\nHSC Reg id of student %d : %d",i+1,st[i].ID);
   printf("\nHSC result of student %d : %f",i+1,st[i].GPA);
   printf("\nName of student %d : %s",i+1, st[i].name);

}

return 0;
}
