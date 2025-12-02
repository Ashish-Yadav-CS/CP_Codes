#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
};

void display(node **head)
{
	if(*head==NULL)
	{
		cout<<"No node present";
		return;
	}
	node *curr = *head;
	cout<<"The linked list is given as :"<<"\n";
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
	node *temp = new node();
	temp->data = data;
	temp->next = NULL;
	if(*head==NULL)
	{
		*head = temp;
		return;
	}
	node *curr = *head;
	while(curr->next!=NULL)
	{
		curr = curr->next;
	}
	curr->next = temp;
	return;
	
}

int main()
{
	node *head = NULL;
	int n;
	cout<<"Enter the number of nodes:";
	cin>>n;
	while(n)
	{
		int val;
		cout<<"Enter value";
		cin>>val;
		insert(&head,val);
		n--;
	}
	display(&head);
	return 0;
}
