    #include<stdio.h>
    #include<stdlib.h>
    struct node
    {
        struct node *leftchild;
        char data; 
        struct node *rightchild;
    };
    typedef struct node Node;
    //traversals by using recursion
    void preorder(Node *ptr){
        if (ptr==NULL)
            return;
        printf("%d  ",ptr->data);
        preorder(ptr->leftchild);
        preorder(ptr->rightchild);
    }
       void inorder(Node *ptr){
        if (ptr==NULL)
            return;
        inorder(ptr->leftchild);
        printf("%d  ",ptr->data);
        inorder(ptr->rightchild);
    }
       void preorder(Node *ptr){
        if (ptr==NULL)
            return;
        preorder(ptr->leftchild);
        preorder(ptr->rightchild);
        printf("%d  ",ptr->data);
    }
    
    