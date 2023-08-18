#include <stdio.h>
#include<string>
#include<iostream>

using namespace std;

struct sInfo {
    string name;
    int age;
    int id;


} ;

void bsort (struct sInfo user[],int n ){
    string temp3;

    for (int i = 0 ; i < n - 1; i++){
        for (int j = 0 ; j < n - i - 1; j++){
            if(user[j].age>user[j+1].age){
                int temp = user[j].age;
                user[j].age=user[j+1].age;
                user[j+1].age=temp;

                int temp2 = user[j].id;
                user[j].id=user[j+1].id;
                user[j+1].id=temp2;

                temp3 = user[j].name;
                user[j].name=user[j+1].name;
                user[j+1].name=temp3;



            }
        }
    }

    printf("\nAFter sortinggg\n");
    for(int i=0; i<n; i++){
      printf("\nUser Info of %d \n ",i+1);
        //printf("\nname : %s",user[i].name);
        cout<< "Name "<<user[i].name<<"\n";
         //printf("\nage : %d",user[i].age);
          cout<< " Age "<<user[i].age<<"\n";
     //printf("\nID : %d",user[i].id);
      cout<< " ID "<<user[i].id<<"\n";


    }


}

int main (){

    int n;
    scanf("%d",&n);
    struct sInfo user[n];

    for(int i=0; i<n; i++){
        printf("Enter name ");
        //scanf("%s",&user[i].name);
        cin>>user[i].name;
        printf("\nEnter age ");
        //scanf(" %d",&user[i].age);
        cin>>user[i].age;
        printf("\nEnter ID ");
        //scanf(" %d",&user[i].id);
        cin>>user[i].id;

    }

//    for(int i=0; i<n; i++){
//      printf("\nUser Info of %d ",i+1);
//        printf("\nname : %s",user[i].name);
//        cout<< "Name "<<user[i].name;
//         printf("\nage : %d",user[i].age);
//          cout<< "Age "<<user[i].age;
//     printf("\nID : %d",user[i].id);
//      cout<< "ID "<<user[i].id<<"\n";
//
//
//    }

    bsort(user,n);


}
