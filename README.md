#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node*left,*right;
}*root;
struct node*newNode(int item){
	struct node*temp=(struct node*)malloc(sizeof(struct node));
	temp->info=item;
	temp->left=temp->right=NULL;
	return temp;
}
struct node*insert(struct node*root,int key)
{
	if(root ==NULL)return newNode(key);
	if(key<root->info)
	root->left=insert(root->left,key);
	else
	root->right=insert(root->right,key);
	return root;
}
void inorder(struct node*root){
	if(root!=NULL){
	inorder(root->left);
	printf("%d->",root->info);
	inorder(root->right);
	}
	}
int main()
{
	int data,n,i;
	struct node*root;
	printf("\n\n binary searchtree creation \n");
	printf("\n enter the root info \n");
	scanf("%d",&data);
	root=newNode(data);
	printf("\n enter the number of nodes in the BST other than root node \n");
	scanf("%d",&n);
	printf("\n\n enter the node info's one by one\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		insert(root,data);
	}
	printf("\n\n BST in inorder traversal\n");
	}
	
	
