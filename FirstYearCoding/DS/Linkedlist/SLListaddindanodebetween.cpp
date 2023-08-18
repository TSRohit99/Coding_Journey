#include <stdio.h>

struct node
{
    int data;
    struct node *next;
};

void travarsal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void addNode(int index, struct node *ptr, struct node *nNode)
{
    int i = 1;
    while (i != index)
    {
        ptr = ptr->next;
        i++;
    }
    nNode->next = ptr->next;
    ptr->next = nNode;
}

struct node *delfNode(struct node *ptr)
{
    ptr = ptr->next;
    return ptr;
}

struct node* delbNode(int index, struct node *ptr)
{
    struct node* head=ptr;
    int i = 0;
    if(index==0){
      return delfNode(ptr);
    }
    else {
    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }
    struct node *q = ptr->next;
    ptr->next = q->next;
    }
    return head;
}
void delLNode(struct node *ptr)
{
    struct node* temp=ptr->next;
    while (temp->next!= NULL)
    {
        temp = temp->next;
        ptr=ptr->next;
    }
    ptr->next=NULL;

    
}
int findNode(int value, struct node *ptr)
{   struct node* head=ptr;
    int i =0;
    while (ptr != NULL)
    {
        if(ptr->data==value)
          return i;
        ptr = ptr->next;
        i++;
    }
}

int main()
{

    struct node *head;
    struct node *sec;
    struct node *thr;
    struct node *nsec;
    struct node *rsec;
    head = new node;
    sec = new node;
    nsec = new node;
    rsec = new node;
    thr = new node;

    head->data = 10;
    head->next = sec;
    sec->data = 20;
    sec->next = nsec;
    nsec->data = 30;
    nsec->next = rsec;
    rsec->data = 40;
    rsec->next = thr;
    thr->data = 50;
    thr->next = NULL;

    struct node *nNode = new node;
    nNode->data = 99;
    nNode->next = NULL;

    travarsal(head);
    printf("After adding a new node\n\n");
    addNode(2, head, nNode);
    travarsal(head);
    printf("After Deleting the first node\n\n");

    head = delfNode(head);
    travarsal(head);
    printf("After Deleting the random node\n\n");

    head = delbNode(4, head);
    travarsal(head);
     
    printf("\n\nAfter Deleting the last node\n\n");

    delLNode(head);
    travarsal(head);
}
