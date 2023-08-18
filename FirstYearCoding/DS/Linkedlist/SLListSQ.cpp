#include<stdio.h>

struct node{

    int data;
    struct node* next;

};

class SLListSQ{
    public:
    SLListSQ();
    void push(int);
    int pop();
    void enqueue(int);
    int dequeue();
    void __PrintSL();
    void addNodeBet(int, int);
    void delLNode();
    int findNode(int);
    int n;


private:
    struct node* newNode(int );
    //int n;
    struct node* head;
    struct node* tail;
};


SLListSQ::SLListSQ(){
    n=0;
    head =NULL;
    tail = NULL;
}

struct node* SLListSQ::newNode(int data){
    struct node* box= new node;
    box->data= data;
    box->next=NULL;
    return box;
}

void SLListSQ::push(int data){
    struct node* u= newNode(data);
    u->next=head;
    head=u;
    if(n==0)
      tail=u;
    n++;

}

int SLListSQ::pop(){
    if(n==0)
     return NULL;

    int prev = head->data;
    head=head->next;
    n--;
    if(n==0)
     tail=NULL;
    return prev;

}

void SLListSQ::enqueue(int data){
    struct node* u= newNode(data);
    if(n==0)
     head=u;
     else
     tail->next = u;
     tail=u;
    n++;

}

int SLListSQ::dequeue(){
    return pop();
}

void SLListSQ::addNodeBet(int data, int index){
    struct node* u= newNode(data);
    struct node* ptr= head;
    int i=1;
    while (i!=index)
    {
        ptr=ptr->next;
        i++;
    }
    u->next=ptr->next;
    ptr->next=u;
    n++;

}

void SLListSQ::delLNode(){
    struct node* temp=head->next;
    struct node* ptr =head;
    while (temp->next!= NULL)
    {
        temp = temp->next;
        ptr=ptr->next;
    }
    ptr->next=NULL;
    n--;
}

int SLListSQ::findNode(int value)
{   struct node* ptr=head;
    int i =0;
    while (ptr != NULL)
    {
        if(ptr->data==value)
          return i;
        ptr = ptr->next;
        i++;
    }
}

void SLListSQ::__PrintSL(){

    struct node* ptr= head;
    printf("[ ");
  while(ptr!=NULL){
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    printf("]\n");

}



int main (){

SLListSQ ob;
printf("Pushing three items....\n");
ob.push(20);
ob.push(30);
ob.push(80);
ob.__PrintSL();

printf("Enqueuing four items....\n");
ob.enqueue(01);
ob.enqueue(02);
ob.enqueue(03);
ob.enqueue(04);
ob.__PrintSL();

printf("Poping 2 items....\n");
int r1= ob.pop();
int r2=ob.pop();
ob.__PrintSL();
printf("Removed values are %d,%d!\n", r1,r2);
printf("Dequeuing 2 items....\n");
r1= ob.dequeue();
r2= ob.dequeue();
ob.__PrintSL();
printf("Removed values are %d,%d!\n", r1,r2);

printf("Adding a node at given index\n");
ob.addNodeBet(99,2);
ob.__PrintSL();

printf("Deleting last Node..\n");
ob.delLNode();
ob.__PrintSL();

int index = ob.findNode(3);
    printf("\nThis node(data- 03) is on %d index\n", index);

    printf("Total nodes %d", ob.n);



}
