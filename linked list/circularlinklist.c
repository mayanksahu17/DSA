#include<stdio.h>
#include<stdlib.h>
struct Node
{
   int data;
   struct Node *next;
}; 
typedef  struct Node Node;

void traverse(Node *head);
 int main()      
{                   
    Node *head   ;    
    Node *second ;  
    Node *third  ;   
    Node *four   ;     

  // Allocate memory for nodes in the linked list in heap

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  four = (struct Node *)malloc(sizeof(struct Node));
   
    // link first and second nodes

    head->data = 7;
    head->next = second;

    // link second and third element

    second->data = 22;
    second->next = third;

    // link third and fourth element

    third->data = 44;
    third->next = four;

    // terminate the list at the  four node

    four->data = 88;
    four->next = head;
 
              Node*p  = head ; 
              do
              {
                  printf(" Element : %d\n",p->data);
                   p = p->next;
              }    
     while (p!=head);
   
    return 0;
}
