#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *next;
};
typedef struct Node node;
//  function to count number of nodes in a linked list
int countnode(node *head);
int main()
{
    node *head = NULL;
    int i,n,x;
    printf("Enter the number of nodes  :");
    scanf("%d",&n);
    // creating a linked list of n nodes
    for ( i = 0; i < n; i++)
    {
       printf("\nEnter the data for node %d-: ",i+1);
       scanf("%d",&x);
    //    creating a new node
    node *newnode = (node * )malloc(sizeof(node));
    newnode->value = x;
    newnode=newnode->next;
    if (head==NULL)
    {
        head = newnode;
    }
    else{
        node *current = head;
        while(current->next !=NULL)
        {
            current->next = newnode;
        }
    }  

    }
    //printing the linked list 
    printf("The linked list is : ");
    node *current = head;
    while(current !=NULL)
     {
        printf(" Element - %d",current->value);
        current = current->next;
     }
     //counting the number of nodes 
     int count = countnode(head);
     printf("\nThe number of nodes in the linked list:%d\n",count);
     return 0;
}
int countnode(node *head)
{
    int count = 0 ;
    node *current = head;
    while (current!=NULL)
    {
       count++;
       current = current->next;
    }
    return count;

}
node *create_node(int value)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->value = value;
    new_node->next = NULL;
    return new_node;
}