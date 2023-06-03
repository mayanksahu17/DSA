#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int qu[MAX];
int front= 0,rear = -1;
void insert(int m){
    if (rear==MAX-1)
    {
        printf("Queue is full");
        return;
    }
    else{
    rear++;
    qu[rear] = m;
    printf("\nElement inserted ");}
}
void display(){
    if(rear==-1){
    printf("Queue is empty");
    }
   int temp = 0;
   temp  = front;
   while(temp<=rear){
    printf("\n%d",qu[temp]);
    temp++;
   }
}
int del(){
  int y;
    y =  qu[front];
    front++;
      printf("\nDeletes element is %d\n",y);
   
    return y;
}

 void frontdispaly(){
    printf("\n%d",qu[front]);
 }
 
 
 int main(){

insert(10);
insert(101);
insert(102);
insert(103);
insert(104);
frontdispaly();
del();
display();
return 0;
 }
