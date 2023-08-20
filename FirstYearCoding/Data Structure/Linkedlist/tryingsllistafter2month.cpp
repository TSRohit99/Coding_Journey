#include<stdio.h>

class Node {
    public:
    int data;
    Node* next;
};

class SLList{
    public:
    SLList();
    void push(int);
    int pop();
    void enqueue(int);
    int dequeue();
    int Size();
    void __Printer();

private:
   int n;
   Node* newNode(int);
   Node* head;
   Node* tail;


};

SLList::SLList(){
    n=0;
    head=NULL;
    tail=NULL;
}

Node* SLList::newNode(int data){
    Node* box= new Node;
    box->data= data;
    box->next=NULL;
    return box;
    
}

void SLList::push (int data){
    Node* u= newNode(data);
    u->next=head;
    head=u;
    if(n==0)
     tail=u;

     n++;

}
int SLList::pop (){
    if(n==0)
    return NULL;

    int prev = head->data;
    head=head->next;
     n--;

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

int SLList::Size(){
    return n;
}

void SLList::__Printer(){
    if(n==0)
    printf("LinkedList is Empty like your brain!\n");
    printf("[ ");
    Node* ptr= head;
    while(ptr!= NULL){
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    printf("]\n End of your Linked list sir!!|\n\n");

}

int main (){

    SLList ob;
    //ob.__Printer();
    ob.push(20);
    ob.push(30);
    ob.push(40);
    ob.push(50);
    ob.push(60);
    ob.push(70);
    ob.__Printer();
    ob.enqueue(100);
    ob.enqueue(200);
    ob.__Printer();
    ob.dequeue();
    ob.__Printer();

    printf("The size of SLList %d", ob.Size());


}