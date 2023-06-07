#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int value;
    struct Node *next;
};
typedef struct Node node;
void add_node(node **head_ref, int value);
node *create_node(int value);
void dispaly(node *head);
void delete_beg();
void delete_end();
void add_node(node **head_ref, int value);


node *create_node(int value)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}

void add_node(node **head_ref, int value)
{
    node *new_node = create_node(value);
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
    }
    else
    {
        node *current_node = *head_ref;
        while (current_node->next != NULL)
        {
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }
}
void delete_beg(node *head)
{
    node *ptr;
    ptr = head;
    head = head->next;
    printf("\n%d node deletd\n", ptr->value);
    free(ptr);
}
void delete_end(node *head)
{
    node *ptr=head,*temp;

    while (ptr!= NULL)
    {
        ptr = temp;
        ptr = ptr->next;
    }
    printf("\n%d node deleted\n", temp->value);
    
    free(temp);
}

void dispaly(node *head)
{
    while (head != NULL)
    {
        printf(" ---->%d", head->value);
        head = head->next;
    }
}
int main()
{
    node *head=NULL;
    add_node(&head, 49);
    add_node(&head, 47);
    add_node(&head, 46);
    add_node(&head, 48);
      dispaly(head);
      delete_end(head);
                dispaly(head);


   

    return 0;
}