#include<stdio.h>
    #include<stdlib.h>
    #define MAX 10
    //traversals by using NON-recursion
    struct node
    {
        struct node *leftchild;
        char data; 
        struct node *rightchild;
    };
    typedef struct node Node;
    Node *stack[MAX]
     int top =-1;

  void push_stack(Node *item){
    if(top==MAX-1)
    {
        printf("\nstack overflow\n");
        return ;
    }
    top++;
    stack[top] = item;
  }
  Node *pop_stack(){
Node *item;
if (top==-1)
{
 printf("\nStack Underflow\n");
 exit(1);
}
item = stack[top];
top--;
return item;
  }
  int stack_Empty(){
    if(top==-1){
        return 1;
    }
    return 0;
  }