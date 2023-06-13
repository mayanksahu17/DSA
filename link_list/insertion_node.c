#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*Head;
typedef struct Node Node;
Node *createnode(int value)
{
  Node *newnode = (Node*) malloc(sizeof(Node));
  newnode->data = value; 
  newnode->next = NULL;
  return newnode ;
}
void Insert_at_First(){
    int data;
    printf("Enter the data :");
    scanf("%d",&data);
    Node *new = createnode(data);
    if(Head==NULL){
        Head = new;
        
    }else{
        Node *temp = Head;
        Head = new;
        new->next  = temp;}
        }
   void traverse()
{  
   if(Head==NULL)
   {
      printf("\nThe list is empty\n");
   }  else{
  while (Head!=NULL)
  {
      printf("%d---->",Head->data);
      Head = Head->next;
   }
         printf("NULL");
   }
}
void insert_at_last(){
     int data;
    printf("Enter the data :");
    scanf("%d",&data);
    Node *newnode = createnode(data);
    if(Head==NULL){
       Head = newnode;
    }else{
           Node *temp = Head;
       while(temp->next!=NULL)
       temp  = temp->next;
       temp->next = newnode;
    }
}
void traverse_reverse(struct Node *head){
  
    if(head==NULL){return ;}
     traverse_reverse(head->next);
     printf("%d--->",head->data);

    }

void main(){

   // we have these four functions
   // insert_at_last();
   // Insert_at_First();
// traverse_reverse(Head);
// traverse(Head);
   
}