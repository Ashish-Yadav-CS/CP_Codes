#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next;
};
void insert(node **head, int val)
{
	node *temp = new node();
	temp->data = val;
	temp->next = NULL;
	if(*head==NULL)
	{
		*head = temp;
		return;
	}
	node *ptr = *head;
	while(ptr->next!=NULL)
	{
		ptr = ptr->next;
		
	}
	ptr->next = temp;
	return ; 
}
void deleete(node **head)
{
	node *temp = *head;
	
	int n;
	cout<<"how many value u want to delete: ";
	cin>>n;
	while(n)
	{
	 temp = temp->next;
	 n--;	
	}
	*head = temp;
	return;
}
void display(node **head)
{
	node *ptr1 = *head;
	if(*head == NULL)
	{
		cout<<"Linked list is Empty";
		return ; 
	}
	while(ptr1!=NULL)
	{
		cout<<ptr1->data<<"->";
		ptr1 = ptr1->next;
		
	}
	cout<<"NULL";
	return ;
}

int main()
{
	int i,n;
	node *head = NULL;
	cout<<"Enter the value : ";
	cin>>n;
	int val;
	while(n)
	{
		cin>>val;
		insert(&head,val);
		n--;
	}
	deleete(&head);
	display(&head);
	return 0;
}
