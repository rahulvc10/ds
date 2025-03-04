#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int val;
struct node*next;
}*Head;
void main()
{
int choice=0;
Head=(struct node*)malloc(sizeof(struct node*));
printf("\n*********stack operations using linked list*********\n");
printf("\n----------------------------------\n");
while(choice !=4)
{
printf("\n\nchose one from the below options...\n");
printf("\n1.push\n2.pop\n3.show\n4.Exit");
printf("\n Enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
	case 1:
	{
	 push(Head);
	 break;
	}
	case 2:
	{
	 pop(Head);
	 break;
	 }
	 case 3:
	 {
	 display(Head);
	 break;
	 }
	 case 4:
	 {
	 printf("exiting....");
	 break;
	 }
	 default:
	 {
	 printf("Please Enter vaild choice");
	 }
	};
}
}
void push(struct node*Head)
{
int val;
struct node*y;
struct node*ptr=(struct node*)malloc(sizeof(struct node));
printf("Enter the value");
scanf("%d",&val);
ptr->val=val;
ptr->next=NULL;
if(Head->next==NULL)
{
Head->next=ptr;
}
else
{  y=Head->next;
while(y->next!=NULL)
{
y=y->next;
}
y->next=ptr;
}
printf("item pushed");
} 
void pop(struct node*Head)
{
int item;
struct node*x,*y;
if(Head->next==NULL)
{
printf("Underflow");
}
else
{ x=Head;
y=Head->next;
while(y->next!=NULL)
{
x=y;
y=y->next;
}
x->next=NULL;
free(y);
printf("item popped");
 }
}
void display(struct node*Head)
{
struct node*y;
y=Head;
printf("/n Head=>");
while(y->next!=NULL)
{
y=y->next;
printf("%d=>",y->val);
}
printf("NULL\n");
}

	 
