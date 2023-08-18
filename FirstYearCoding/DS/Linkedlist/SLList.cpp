#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node * next;
};

void printSL(struct node* ptr){

    while(ptr!=NULL){
        printf("%d\n", ptr->data);
        ptr=ptr->next;
    }
}

int main (){

   struct node * Head;
   struct node * first;
   struct node * second;
   Head= new node;
   first= new node;
   second= new node;

   Head->data=10;
   Head->next=first;
   first->data=20;
   first->next=second;
   second->data=30;
   second->next=NULL;

   printSL(Head);





}
