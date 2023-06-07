#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node * insertatindex(struct Node *head,int data,int index){
    struct Node * ptr;
    ptr = (struct Node * )malloc(sizeof(struct Node));
    struct Node *p =head;
    int i = 0;
    while (i!=index-1)
    {
        p =p->next;
        i++;
    }
    ptr ->data=data;
    ptr->next = p->next;
    p->next =ptr;
    return ptr;
}
//for traverse
void traversel(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    return;
}
// insertion at first
struct Node * insertAtfirst(struct Node *head, int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr ->data = data;
    ptr ->next = head;
    
    return ptr;
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

    insertatindex(head,14,4);
    traversel(head);
    return 0;
}
