#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int QUEUE[MAX];
int front = -1;
int rear = -1;

int isFull() { if((front == 0 && rear == MAX - 1) || (front == rear + 1))return 1; else{ return 0; }}
int isEmpty(){
    if(front==-1&&rear==-1|| (front == rear + 1)){ return 1;}else{return 0;}}
void enqueue(int data){
   if(front ==rear+1||rear<front){front =-1;rear =-1; } if(isFull()){printf("Queue is full");return ;} if(rear==MAX-1){rear = (rear+1)%MAX;}if(front ==-1&&rear ==-1){front =0;rear =0;} else{rear++;}
  QUEUE[rear] = data ; printf("Enqued element : %d\n",data); }

int dequeue() { int temp ;if(front==rear+1){ printf("Queue is empty . Cannot dequeue element.\n"); return 0; }if(isEmpty()){ printf("Queue is empty . Cannot dequeue element.\n"); return 1;} temp = QUEUE[front]; 
 if(rear<front){ front = (front +1)%MAX; } if(front==rear+1) {front = -1; rear = -1; }  printf("Dequeued element: %d\n",temp);front++; printf("\nrear = %d",rear);printf("\nfront = %d",front); return temp;}

void Dispaly(){if (isEmpty()) { printf("Queue is empty.");return;} printf("\nElements in the queue: ");
 int i =front; printf("\nrear = %d",rear);printf("\nfront = %d\n",front); do{printf("\n %d ",QUEUE[i]);if(i==MAX-1){i = ((i++)%MAX );}else{i++;}} while(i<rear);printf("\n %d ",QUEUE[i]); printf(" \n");}
int main(){int choice, item; 
                                         printf("\nCircular Queue Menu\n");
                                         printf("1. Enqueue\n");
                                         printf("2. Dequeue\n");
                                         printf("3. Display\n");
                                         printf("4. Exit\n");  
                                         while (1) {
                                         printf("\nEnter your choice: ");
                                         scanf("%d", &choice);
switch (choice)
{case 1: printf("Enter the Element to Enqueue: "); scanf("%d",&item);enqueue(item); break;
 case 2: item = dequeue(); break;
 case 3: Dispaly(); break;
 case 4: printf("Exiting the program.\n"); exit(0); break;
default: printf("Invalid choice. Please try again.\n"); break;
}}return 0;}
