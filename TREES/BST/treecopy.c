#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *lchild;
    struct Node *rchild;
};
struct Node *createNode(int Data){
    struct Node *NewNode = (struct Node *)malloc(sizeof(struct Node *));
    NewNode->data = Data;
    NewNode->lchild = NULL;
    NewNode->rchild =NULL;
    return NewNode;
}
struct Node  *InsertNode(struct Node *root,int Data){
    if(root==NULL){ return createNode(Data);    }
    else if(Data<root->data) {   root->lchild = InsertNode(root->lchild,Data);}
    else if(Data>root->data){root->rchild = InsertNode(root->rchild,Data);} 
     return root; }
void Inorder_Traversal(struct Node *root){
    if(root!=NULL){Inorder_Traversal(root->lchild);
      printf("%d  ",root->data);
      Inorder_Traversal(root->rchild);}
     return ;}
void Preorder_Traversal(struct Node *root){
    if(root!=NULL){
      printf("%d  ",root->data);
      Preorder_Traversal(root->rchild);
      Preorder_Traversal(root->lchild);}
     return ;}
void Postorder_Traversal(struct Node *root){
    if(root!=NULL){
      printf("%d  ",root->data);
      Postorder_Traversal(root->lchild);}
      Postorder_Traversal(root->rchild);
     return ;}
     int main(){
          struct Node *Root = NULL;
          Root = InsertNode(Root,100);
          Root = InsertNode(Root,200);
          Root = InsertNode(Root,230);
          Root = InsertNode(Root,120);
          Root = InsertNode(Root,190);
          Root = InsertNode(Root,90);
          Root = InsertNode(Root,200);

           Inorder_Traversal(Root);
           printf("\n ");
           Postorder_Traversal(Root);
    return 0;

     }