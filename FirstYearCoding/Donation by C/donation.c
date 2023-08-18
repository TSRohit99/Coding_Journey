#include<stdio.h>


typedef struct
{

    int ID;
    char name[30];
    int donated;


} info;

void viewdata()
{
    FILE* ptr;
    ptr= fopen("Donation.txt","r");
    char ch;
    while(1)

    {
        ch= fgetc(ptr);
        if(ch==EOF)
            break;
        printf("%c",ch);
    }


    fclose(ptr);
}

void adddata(int n, char date[])
{

    info user[n];
    int i,t,r;
    for(i=0; i<n; i++)
    {

        printf("Enter the id of user-%d : ",i+1);
        scanf("%d", &user[i].ID);
        printf("Enter the name of user-%d : ",i+1);
        scanf(" %[^\n]s",user[i].name);
        printf("How much user-%d donated(in BDT): ",i+1);
        scanf("%d", &user[i].donated);


    }

    FILE* ptr;
    ptr= fopen("Donation.txt","a");

    fprintf(ptr,"%s","\n\nThis data is Added Data on ");
    fprintf(ptr,"%s",date);
    for (int i=0; i<n; i++)
    {


        fprintf(ptr,"\n\nThe ID of Student %d : %d",i+1,user[i].ID);
        fprintf(ptr,"\nThe name of Student %d : %s",i+1,user[i].name);
        fprintf(ptr,"\nThis Student donated: %d",user[i].donated);

    }

    fclose(ptr);
}

int main()
{

    int n,s,r;
    printf("Welcome to the NEUB Students portal\n\tMade by Rohit\n1.Add Student Data in the DB\n2.View the Database\n\nEnter your choice: ");
    scanf("%d",&n);

    switch(n)
    {

    case 1:

    {   char date[10];
        printf("Enter Today's date: ");
        scanf(" %[^\n]s", date);
        printf("How many students are in line?: ");
        scanf(" %d", &s);
        adddata(s,date);

        break;
    }

    case 2:

    {
        //printf("Enter the roll of the student : ");
        //scanf("%d", &r);
        viewdata();

        break;
    }

    default:
        printf("Enter 1  or 2 only!"); 
    
       

    }

    return 0;
}