#include <stdio.h>

class TNode{
    public:
    int data;
    TNode* parent;
    TNode* left;
    TNode* right;
};

class binaryTree{
public:
    binaryTree();
    TNode* buildT(int arr[], int*, TNode*);
    TNode* newNode(int);
    int n;
    TNode* r;
    //travarsal
    void preOrderRec(TNode* u);
    void inOrderRec(TNode* u);
    void postOrderRec(TNode* u);

};

binaryTree::binaryTree(){
    r=NULL;
    n=0;
}

TNode* binaryTree::newNode(int data){
    TNode* box= new TNode;
    box->data=data;
    box->parent=NULL;
    box->left=NULL;
    box->right=NULL;
    return box;

}

TNode* binaryTree::buildT(int arr[], int* CI, TNode* p){
    *CI+=1;
    if(arr[*CI]==-1)
     return NULL;

    TNode* u= newNode(arr[*CI]);
    n++;

    if(*CI==0)
    r=u;
    u->parent=p;
    u->left=buildT(arr, CI, u); 
    u->right=buildT(arr, CI, u);
    return u; 

}

//travarsal

void binaryTree::preOrderRec(TNode* u){
    if(u==NULL)
    return;
    printf(" %d", u->data);
    preOrderRec(u->left);
    preOrderRec(u->right);
}
void binaryTree::inOrderRec(TNode* u){
    if(u==NULL)
    return;
    inOrderRec(u->left);
    printf(" %d", u->data);
    inOrderRec(u->right);
}
void binaryTree::postOrderRec(TNode* u){
    if(u==NULL)
    return;
    
    postOrderRec(u->left);
    postOrderRec(u->right);
    printf(" %d", u->data);
}

int main (){

    binaryTree ob;
    int arr[] = {1, 2, 3,8,9,-1,-1 -1,-1, 4,5,6, -1, -1,
                    7, 10, -1,-1,-1};
    int CI=-1;
    TNode* r= ob.buildT(arr,&CI, NULL);
    printf("Tree built!!");
    printf("\npre orderr!!");
    ob.preOrderRec(r);
    printf("\ninorderr!!");
    ob.inOrderRec(r);
    printf("\npost orderr!!");
    ob.postOrderRec(r);
}