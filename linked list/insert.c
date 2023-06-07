#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{   
	int data;
	struct Node *next;
};
 typedef struct Node Node;
 void traverse(Node *ptr);
struct Node *insertatbegin(struct Node *head);

int main()
{      Node *head;
	struct Node *node1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *node3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *node4 = (struct Node*)malloc(sizeof(struct Node));
    
         printf("enter first element of node 1-\n:");
         scanf("%d",&node1->data);
         node1->next = node2;
         printf("enter second element  of node 2-\n:");
         scanf("%d",&node2->data);
         node2->next = node3;
         printf("enter third element  of node 3-\n:");
         scanf("%d",&node3->data);
         node3->next = node4;
         printf("enter first element of node 4-\n :");
         scanf("%d",&node4->data);
         node4->next = NULL;
          head = node1;
           traverse(head);
//          printf("\t\t now we insert new node \n");
//           head = insertatbegin(head);
////                       traverse(head);
           insert(&head,56,1);
           printf("\nAfter insrtion\n");
                      traverse(head);


    }
    struct Node *insertatbegin(struct Node *head){
    	Node *p = head;
    	Node *newnode ;
    	newnode = (Node *)malloc(sizeof(Node));
    	printf("\n Enter New node data: ");
    	scanf("%d",&newnode->data);
    	newnode->next =p;
    	traverse(newnode);
    	return p;
	}
	void insert(struct node **head, int data, int position) {
   struct Node *new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = data;

   if (position == 0) {
      new_node->next = *head;
      *head = new_node;
   }
   else {
      struct Node *current = *head;
      int i;
      for (  i = 0; i < position - 1; i++) {
         if (current == NULL) {
            printf("Error: Invalid position\n");
            return;
         }
         current = current->next;
      }

      new_node->next = current->next;
      current->next = new_node;
   }
}
     void traverse(Node *ptr){
     	while(ptr!=NULL){
     		printf("\nelement- %d",ptr->data);
     		ptr = ptr->next;
		 }
	 }

    
