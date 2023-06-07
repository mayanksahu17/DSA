#include <stdio.h>
#include <stdlib.h>
struct deleteatpos
{
    int data;
    struct deleteatpos *next;
};
typedef struct deleteatpos del;
void deleteatpos(del *head);
void addnode(del **headref, int value);
void traverse(del *head);
del *createnode(int value);
int main()
{
    del *head;          
    head->next = NULL;
    addnode(&head, 12);
    addnode(&head, 123);
    addnode(&head, 128);
    addnode(&head, 192);
    traverse(head);
    deleteatpos(head);
     printf("\nafter the deleteing node\n");
     traverse(head);
     return 0;

}
del *createnode(int value)
{
    del *new_node = (del *)malloc(sizeof(del));
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}
void addnode(del **headref, int value)
{
    del *newnode = createnode(value);

    if (headref == NULL)
    {
        *headref = newnode;
    }
    else
    {
        del *current_node = *headref;
        while (current_node->next != NULL)
        {
            current_node = current_node->next;
        }
        current_node->next = newnode;
    }
}
void deleteatpos(del *head)
{
    int i, pos;
    del *temp, *ptr;
    if (head == NULL)
    {
        printf("\nEmpty list");
        exit(0);
    }
    else
    {
        printf("\nEnter the pos: ");
        scanf("%d", &pos);
        if (pos == 0)
        {
            ptr = head;
            head = head->next;
            free(ptr);
            printf("\n%d  delete node ", ptr->data);
        }
        else
        {
            ptr = head;
            for (i = 0; i < pos-1; i++)
            {
                temp = ptr;
                ptr = ptr->next;
                if (ptr == NULL)
                {
                    printf("\nPosition not found ");
                    return;
                }
            }
            temp->next = ptr->next;
            printf("\nDelete node: %d", ptr->data);
            free(ptr);
        }
    }
}
void traverse(del *head)
{
    printf("\nLink list are : \n");
    while (head != NULL)
    {
        printf("\n%d", head->data);
        head = head->next;
    }
}
