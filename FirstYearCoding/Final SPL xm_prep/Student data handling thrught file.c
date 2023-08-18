#include <stdio.h>
#include <string.h>

typedef struct {

unsigned int ID;
char name[100];
char sem[10];
char address[100];

} student;


int main () {

    FILE* ptr;

ptr = fopen("Student_Data.txt","a");

int n;

printf("Enter how many students are in line: ");
    scanf("%d",&n);
student user[n];

for (int i=0; i<n; i++) {

    printf("Enter the ID of Student %d :",i+1);
    scanf(" %d",&user[i].ID);
    printf("Enter the name of Student %d :",i+1);
    scanf(" %[^\n]s",&user[i].name);
    printf("Enter the Semester of Student %d :",i+1);
    scanf(" %s",&user[i].sem);
    printf("Enter the Address of Student %d :",i+1);
    scanf(" %[^\n]s",&user[i].address);
printf("\n");
}


fprintf(ptr,"%s","Info of NEUB Students \n\n");
for (int i=0; i<n; i++) {


    fprintf(ptr,"\n\nThe ID of Student %d : %d",i+1,user[i].ID);
    fprintf(ptr,"\nThe name of Student %d : %s",i+1,user[i].name);
    fprintf(ptr,"\nEnter the Semester of Student %d : %s",i+1,user[i].sem);
    fprintf(ptr,"\nEnter the Address of Student %d : %s",i+1,user[i].address);

}


fclose(ptr);

return 0;
}
