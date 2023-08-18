#include<stdio.h>

class DNode{
public:
    int data;
    DNode* prev;
    DNode* next;
};

class DLList{
public:
    DLList();
    int get(int);
    int Set(int,int);
    void add(int,int);
    int Remove(int);
    void __Printer();
    int size();

private:
    int n;
    DNode* dummy;
    DNode* newNode(int);
    DNode* getNode(int );
    int removeNode(DNode*);
    DNode* addBefore(DNode* , int);
    
};

DNode* DLList::newNode(int x){
    DNode* box= new DNode;
    box->data= x;
    box->prev= NULL;
    box->next= NULL;

    return box;
}
DLList::DLList(){
    n=0;
    dummy= newNode(NULL);
    dummy->prev=dummy;
    dummy->next=dummy;
}

DNode* DLList::getNode(int i){
    DNode* p;

    if(i<n/2){
        p=dummy->next;
        for(int j=0; j<i; j++)
            p=p->next;
    }
    else {
        p=dummy;
       for(int j=0; j<n-i; j++)
            p=p->prev;
    }

    return p;
}

int DLList::get(int i){
    return getNode(i)->data;
}

int DLList::Set(int i, int data){
    DNode* u= getNode(i);
    int prev=u->data;
    u->data=data;
    return prev;
}

DNode* DLList::addBefore(DNode* w, int data){
    DNode* u= newNode(data);
    u->prev=w->prev;
    u->next=w;
    u->next->prev=u;
    u->prev->next=u;
    n++;
    return u;
}


void DLList::add(int i, int data){
     addBefore(getNode(i), data);
}

int DLList::removeNode(DNode* w){
    int prev=w->data;
    
    w->prev->next=w->next;
    w->next->prev=w->prev;
    
    n--;
    return prev;
}

int DLList:: Remove(int i){
    return removeNode(getNode(i));
}

int DLList::size(){
    return n;
}

void DLList::__Printer(){
    if(n==0)
     printf("Linked List is empty!!\n\n");

    DNode* ptr= dummy->next;
    printf("[ ");
    while(ptr!=dummy){
        printf("%d ", ptr->data);
        ptr=ptr->next;
    } 
    printf("]\n\n");
}
int main (){

    DLList ob;
    ob.__Printer();
    printf("After adding elements->");
    ob.add(0,100);
    ob.add(1,200);
    ob.add(2,300);
    ob.add(3,400);
    ob.add(4,600);
    ob.__Printer();

    //printf("\nSet(2,11)-> ");
    // int x=ob.Set(2,11);
    // ob.__Printer();
    // printf("\nprevious->%d",x);
    printf("\nCurrent list-> ");
    printf(" Elements %d ", ob.size());

    ob.__Printer();

    printf("\nRemoved(0): %d",ob.Remove(0));
    ob.__Printer();
    printf("\nRemoved(0): %d",ob.Remove(0));

    printf("\nCurrent list-> ");
    ob.__Printer();

    


}