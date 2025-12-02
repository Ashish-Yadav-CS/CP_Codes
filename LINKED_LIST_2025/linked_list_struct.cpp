#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};

void display(node **head)
{
	if(*head==NULL)
	{
		cout<<"No node is present";
		return;
	}
	node *curr = *head;
	cout<<"The linked is as fallows:";
	while(curr!=NULL)
	{
		cout<<curr->data<<"->";
		curr=curr->next;
	}
	cout<<"NULL";
	return;
}

void insert(node **head,int data)
{
	node *temp = (node*)malloc(sizeof(node));
	temp->data=data;
	temp->next=NULL;
	if(*head==NULL)
	{
		*head=temp;
		return;
	}
	node *curr = *head;
	while(curr->next!=NULL)
	{
		curr = curr->next;
	}
	curr->next=temp;
	return;
}


int main()
{
	node *head = NULL;
	int n;
	cout<<"Enter the number of Nodes: ";
	cin>>n;
	
	while(n)
	{
		int val;
		cout<<"Enter the values of nodes:";
		cin>>val;
		insert(&head,val);
		n--;
	}
	display(&head);
	return 0;
}
