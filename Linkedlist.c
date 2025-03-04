#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*next;
}
*new,*head=NULL,*temp,*tail=NULL;
void traverse()
{
if(head==NULL)
printf("\nList is empty\n");
else{
temp=head;
while(temp 1=NULL)
{
printf("Data =%d\n",temp->data);
temp=temp->next;
}
}
}
void InsertAtFront()
{
int value;
printf("Enter the data\n");
scanf("%d",&value);
new=(struct node*)malloc(sizeof(struct node));
new->data=value;
new->next=NULL;
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=new;
}
void insertAtPosition()
{
int i,pos,value;
printf("Enter the data\n");
scanf("%d",&value);
new=(struct node*)malloc(sizeof(struct node));new->data=value;
printf("Enter position\n")
scanf("%d",&pos);
temp=head;
for(int i=2;i<pos;i++)
{
if(temp->next!=NULL){
temp=temp_>next;
}
}
new->next=temp->next;
temp_>next=new;
}
void deleteFirst()
{
if(head==NULL)
printf("\nList is empty\n");
else{
head=head->next;
}
}
void main()
{
int choice;
while(1)
{
printf("1.Traverse\n2.Insert at front\n3.Insert at end\n4.Insert at position\n5.Delete at first\n6.exit");
printf("\nEnter choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
traverse();
break;
case 2:
insertAtFront();
break;
case 3:
insertAtEnd();
break;
case 4:
insertAtPosition();
break;
case 5:
deleteFirst();
break;
case 6:
exit(0);
default:
printf("incorrect choice\n");
}
}
}



