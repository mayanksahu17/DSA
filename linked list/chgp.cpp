struct node {
   int data;
   struct node *next;
};

void insert(struct node **head, int data, int position) {
   struct node *new_node = (struct node*) malloc(sizeof(struct node));
   new_node->data = data;

   if (position == 0) {
      new_node->next = *head;
      *head = new_node;
   }
   else {
      struct node *current = *head;
      for (int i = 0; i < position - 1; i++) {
         if (current == NULL) {
            printf("Error: Invalid position\n");
            return;
         }
         current = current->next;
      }

      new_node->next = current->next;
      current->next = new_node;
   }
}
