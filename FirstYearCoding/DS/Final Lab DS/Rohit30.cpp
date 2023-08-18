#include<stdio.h>

class Node{
    public:
    int data;
    Node* next;
};

class SLList{
    public:
    SLList();
    void push(int);
    int pop();
    int dequeue();
    void enqueue(int);
    int size();
    void __printer();

private:
Node* newNode(int);
int n;
Node* head;
Node* tail;
};

SLList::SLList(){
    n=0;
    head=NULL;
    tail=NULL;
}

Node* SLList::newNode(int data){
    Node* box = new Node;
    box->data=data;
    box->next=NULL;
    return box;
}

void SLList::push(int data){
    Node* u = newNode(data);
    u->next=head;
    head=u;
    if(n==0)
    tail=u;
    n++;

}

int SLList::pop(){
    if(n==0)
     return NULL;
    int prev = head->data;
    head=head->next;
    n--;
    if(n==0)
    tail=NULL;

 return prev;   

}

int SLList::dequeue(){
    return pop();
}

void SLList::enqueue(int data){
    Node* u= newNode(data);
    u->next=NULL;
    tail->next=u;
    tail=u;
    if(n==0)
        head=u;
    n++;
}

int SLList::size(){
    return n;
}

void SLList::__printer(){
    Node* ptr= head;

    if(n==0)
    printf("Linked Listis empty! \n");
    printf("\n [");
    while(ptr!=NULL){
        printf(" %d", ptr->data);
        ptr=ptr->next;
    }
       printf("]");
}

int main(){
    SLList ob;
    ob.__printer();
    ob.push(10);
    ob.push(20);
    ob.push(30);
    ob.push(40);
    ob.push(50);
    ob.__printer();
    printf(" \nRemoved Value %d",ob.pop());
    ob.__printer();
   printf(" \nRemoved Value %d",ob.pop());
    ob.__printer();
     printf(" \nRemoved Value %d",ob.dequeue());
    ob.__printer();
    ob.enqueue(100);
    ob.enqueue(200);
    ob.__printer();
    ob.pop();
    ob.pop();
    ob.pop();
    ob.pop();
    ob.pop();
    
    ob.__printer();
}