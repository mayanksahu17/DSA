#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
   
};
typedef struct Node Node;
Node *createnode(int value);
void add_node(Node **head_ref, int value);
struct Node * insertatbegin(struct Node *head);
void traverse(Node *head);

int main()
{
  Node *head ;
    
   add_node(head,1221);
   add_node(head,12);
    insertatbegin(head);
    traverse(head);
  
}
Node *createnode(int value)
{
  Node *newnode = (Node*) malloc(sizeof(Node));
  newnode->data = value; 
  newnode->next = NULL;
  return newnode ;
}

void add_node(Node **head_ref, int value)
{
    Node *new_node = createnode(value);
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
    }
    else
    {
        Node *current_node = *head_ref;
        while (current_node->next != NULL)
        {
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }
}
      
struct Node * insertatbegin(struct Node *head)
{
    
    struct Node *p =head;
     struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("new node data -: ");
    scanf("%d",&newnode->data);
    newnode->next = p;
    traverse(newnode);
   

    return p ;
}
void traverse(Node *head)
{  
   if(head==NULL)
   {
      printf("\nThe list is empty");
   }
  while (head->next!=NULL)
  {
      printf("%d---->",head->data);
      head = head->next;

   }
  
}

