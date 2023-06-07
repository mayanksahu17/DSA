#include <stdio.h>
#include <stdlib.h>

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
    node *new_node;
     new_node = create_node(value);
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
    }
    else
    {
        node *current_node;
        current_node = *head_ref;
        while (current_node->next != NULL)
        {
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }
}

void reverse_traversal(node *head)
{
    if (head == NULL)
    {
        return;
    }
    node *current_node = head;
    node *previous_node = NULL;
    node *next_node = NULL;
    while (current_node != NULL)
    {
        next_node = current_node->next;
        current_node->next = previous_node;
        previous_node = current_node;
        current_node = next_node;
    }
    while (previous_node != NULL)
    {
        printf("%d ", previous_node->value);
        previous_node = previous_node->next;
    }
}

int main()
{
    node *head = NULL;
    add_node(&head, 1);
    add_node(&head, 2);
    add_node(&head, 3);
    add_node(&head, 4);
    add_node(&head, 9);
    add_node(&head, 8);
    reverse_traversal(head);
    return 0;
}
