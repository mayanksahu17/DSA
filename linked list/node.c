#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
} *head=null;
void createnode(int val)
{
struct node *temp;
temp = (struct node*) malloc (sizeof(struct node));
if(temp==null);
{
printf("\nmemory overflow\n");
return;
}
temp->data=val;
temp->next=nul;
if(head==null)
head=temp;
else{
struct node *ptr;
ptr=head;
while(ptr->next!NULL);
}
ptr->next=temp;
printf("\n node inserted \n");
}

void display()
{
    if(head==NULL)
	printf("\n link list is empty");
	struct node * temp;
	temp=head;
	while(temp->next!NULL)
	{
	printf("\n---->%d",temp->data);
	temp = temp->next;
	}
}
int mian()
{
createnode(100);
createnode(200);
createnode(300);
display()


}

















