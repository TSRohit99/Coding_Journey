#include<stdio.h>


typedef struct {

int ID;
char name[30];
int donated;


} info;

void viewdata(int n){
    FILE* ptr;
ptr= fopen("Donation_list.txt","r");

int i;
char ch[30];
while(1)
{
      fscanf(ptr,"%d",&i);
      if(i==n)
       { int j=i;
            while (1)
            {fscanf(ptr,"%c",&ch[j]);
                printf("%c",ch[j]);
                j++;
                if(ch==EOF)
               break;
               }
       }
      if(i==EOF)
            break;
      i++;
}


fclose(ptr);
}

void adddata(int n) {

    info user[n];
    int i,t,r;
    for(i=0;i<n;i++) {

        printf("Enter the id of user-%d : ",i+1);
        scanf("%d", &user[i].ID);
        printf("Enter the name of user-%d : ",i+1);
        scanf(" %[^\n]s",user[i].name);
        printf("How much user-%d donated(in BDT): ",i+1);
        scanf("%d", &user[i].donated);

    }

FILE* ptr;
ptr= fopen("Donation_list.txt","a");

fprintf(ptr,"%s","Newly Added Data \n\n");
for (int i=0; i<n; i++) {


    fprintf(ptr,"\nThe ID of Student %d : %d",i+1,user[i].ID);
    fprintf(ptr,"\nThe name of Student %d : %s",i+1,user[i].name);
    fprintf(ptr,"\nThis Student donated: %d",user[i].donated);
    //fprintf(ptr,"%c","~");
}

fclose(ptr);
}

int main(){

int n,s,r;
printf("Welcome to the NEUB Students portal\n\tMade by Rohit\n1.Add Student Data in the DB\n2.View any Students Data \n");
scanf("%d",&n);

switch(n) {

    case 1:

        {
            printf("How many students are in line?: ");
            scanf("%d", &s);
            adddata(s);

        break;
        }

    case 2:

        {
            printf("Enter the roll of the student : ");
            scanf("%d", &r);

           viewdata(r);


        break;
        }

default:
 printf("Enter 1 or 2 only!");

}



return 0;

}
