#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int countnode( struct Node *head);
// for traverse
void traversel(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    return;
}
struct Node * insertatindex(struct Node *head ,int index)
   {   int data;
    printf("\nenter the data ");
    scanf("%d",&data);
    struct Node * start = (struct Node *) malloc(sizeof(struct Node));
    start->data = data;
    start->next = head;
    return start->next;
   }
   struct Node * insertatstart(int data,struct Node *head)
   {
    struct Node * start = (struct Node *) malloc(sizeof(struct Node));
    start->data = data;
    start->next = head;
    return start;
   }
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *four;

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
    four->next = NULL;
    head = insertatstart(99,head);

    traversel(head);
    int index;
    printf("enter the pos. of the index: ");
    scanf("%d",&index);
     head = insertatindex(head,index);
    traversel(head);
    countnode(head);
}
int countnode( struct Node *head)
{
    int count = 0 ;
    struct Node *current = head;
    while (current!=NULL)
    {
       count++;
       current = current->next;
    }
    printf("\n The number of nodes is %d",count);
    return count;

}