#include <stdio.h>
#include <stdlib>
struct Node
{
    int value;
    struct Node *next;
};

typedef struct Node node;

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

int main()
{
    node *head = NULL;
    add_node(&head, 100);
    add_node(&head, 530);
    add_node(&head, 234);
    add_node(&head, 550);

    copy(head);
    return 0;
    
}
void copy(struct Node *ptr)
{
    while (ptr->next != NULL)
    {      
        node *temp;
        temp->value = ptr->value;
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
         temp = temp->next;

    }
    return;
}
