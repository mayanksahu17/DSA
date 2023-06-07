#include<stdio.h>
struct node {
    int data;
    struct node* next;
};
   int main() {
    return 0;
   }
struct node* search(struct node* head, int element) {
    struct node* current = head;
    while (current != NULL) {
        if (current->data == element) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}
   