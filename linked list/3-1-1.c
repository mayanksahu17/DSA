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
void traverse(node *head);
// void search(node *start, int item);
// void insertatbeg(node *head);
// void insertatend(node *head);
node *reverse(node*start);
int main()
{
    node *head = NULL;
    add_node(&head, 452);
    add_node(&head, 850);
    add_node(&head, 895);
    add_node(&head, 256);

    traverse(head);
    // insertatend(head);
     reverse(head);
    //    insertatbeg(head);
    // traverse(head);
    // search(head, x);
    return 0;
}
// serching in a linked list
// void search(node *start)
// {
//     node *p = start;
//     int x;
//     printf("\nEnter the data that you want to found that position: ");
//     scanf("%d", &x);
//     int pos = 1;
//     while (p != NULL)
//     {
//         if (p->value == item)
//         {
//             printf("%d found at this %d position ", item, pos);
//         }
//         p = p->next;
//         pos++;
//     }
// }
void traverse(node *head)
{
    while (head != NULL)
    {
        printf("%d--->", head->value);
        head = head->next;
    }
    printf("NULL\n");
}
// insertion at  the begining of the list

//  void insertatbeg(node*head)
//   {
//      int z;
//      printf("\n Enter the data for new node: ");
//      scanf("%d",&z);
//      node *ptr = (node*)malloc(sizeof(node));
//        ptr->value = z;
//        ptr->next = head;
//        head = ptr;
//        traverse(head);
//        return ;
//   }
// insertion at the end of the list
// void insertatend(node *head)
// {
//     int z;
//     printf("\n Enter the data for new node: ");
//     scanf("%d", &z);
//     node *newnode = (node *)malloc(sizeof(node));
//     node *potr;
//     potr = head;
//   newnode->value = z;
  
//     while (potr->next != NULL)
    
//         potr = potr->next;
    
//       potr->next = newnode;
//     newnode->next= NULL;

//      printf("\nYour data is sucsesfully inserted in the end \n");
//      while (head != NULL)`
//     {
//         printf("%d--->", head->value);
//         head = head->next;
//     }
//     printf("NULL\n");
    
// }
node *reverse(node*start)
{
    node *prev,*next,*ptr;
    prev = NULL;
    ptr = start;
    while (ptr!=NULL)
    {
        next = ptr->next;
        ptr->next = prev;
        prev = ptr;
        ptr = next;
    }
    start = prev ;
    while (start != NULL)
    {
        printf("%d--->", start->value);
        start = start->next;
    }
    printf("NULL\n");
}