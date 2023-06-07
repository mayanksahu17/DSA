#include<iostream>
using namespace std;
#include<malloc.h>
struct Node{
int data;
struct Node *next;
};
typedef struct Node Node;
int main(){
 Node *node1,*node2,*node3,*head;
 node1 =( Node*)malloc(sizeof(Node));
 node2 =( Node*)malloc(sizeof(Node));
 node3 =( Node*)malloc(sizeof(Node));
 node1->data = 100;
 node1->next = node2;
 node2->data = 200;
 node2->next = node3;
 node3->data = 300;
 node3->next = NULL;
 head = node1;
 while (head!=NULL)
 {
    cout<<"---->"<<head->data;
    head = head->next;
 }
 return 0;
}