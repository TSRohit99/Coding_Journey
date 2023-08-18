#include<stdio.h>

int main(){

FILE* fptr;

fptr = fopen("test.txt", "w"); //r,w,a

int n;
printf("How many number should stay in your file 1 to ? ");
scanf("%d",&n);

int i=0;
while (i!=n){


    fprintf(fptr,"%d\n",i);


    i++;
}


//char w;

/*fscanf(fptr, "%c", &w); // when to get something from a file
printf("%c",w);
//fprintf(fptr,"%c",w); // when to add something we put the value that stored in w */

fclose(fptr);

fptr = fopen("test.txt", "r");
int w,t;

printf("\nHow many odd number s you need from your file 1 to %d ? : ",n);
scanf("%d",&t);

i=0;
while (i!=t){

    fscanf(fptr, "%d", &w);

    if(w%2!=0)
    printf("%d\n",w);

    i++;
}

fclose(fptr);




return 0;
}
