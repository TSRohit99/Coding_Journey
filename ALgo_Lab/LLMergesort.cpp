#include<bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int x){
        this->data=x;
        this->next= NULL;

    }
};


node* findmid(node* head){
    node* slow= head;
    node* fast= head->next;

    while(fast!=NULL && fast->next!=NULL ){
        slow= slow->next;
        fast= fast->next->next;
    }
  return slow;
}

node* merge(node* left, node* right){
     
     if(left==NULL)
      return right;
    if(right==NULL)
      return left;

    node* ans= new node(-1);
    node* temp= ans;

    while(left!= NULL && right!= NULL){
        if(left->data < right->data){
            temp->next= left;
            temp= left;
            left= left->next;
        }

        else {
            temp->next= right;
            temp= right;
            right= right->next;
        }
    }

    while(left!= NULL){
         temp->next= left;
            temp= left;
            left= left->next;
    }

    while(right!= NULL){
        temp->next= right;
            temp= right;
            right= right->next;
    }
 ans= ans->next;
return ans;
}

node* mergeSort(node* head){
    if(head== NULL|| head->next== NULL)
      return head;

    node* mid= findmid(head);

    node* right = head;
    node* left= mid->next;
    mid->next= NULL;

    left= mergeSort(left);
    right= mergeSort(right);

    // merging 
   node* res= merge(left, right);
   return res;

}

void print(node* temp){
     while(temp!=NULL){
        cout<<temp->data << " ";
        temp=temp->next;
    }
}

int main (){
    
    node* head;
    node* n0= new node(80);
    node* n1= new node(1);
    node* n2= new node(7);
    node* n3= new node(5);
    node* n4= new node(4);

    head=n0;
    n0->next= n1;
    n1->next= n2;
    n2->next= n3;
    n3->next= n4;
    n4->next=NULL;

    node* temp= head;
    print(temp);

    temp= mergeSort(head);
    cout<<endl;
    print(temp);
   

   

}