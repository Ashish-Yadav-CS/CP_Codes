#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
void insert(node **head,int val)
{
	node *temp = new node();
	temp->data = val;
	temp->next = NULL;
	if(*head==NULL)
	{
		*head = temp; 
		return;
	}
	node  *temp1 = *head;
	while(temp1->next!=NULL)
	{
		temp1=temp1->next;
	}
	temp1->next = temp;
	return ;
}
void reverse(node **head)
{
	if(*head==NULL)
	{
		cout<<"No node to reverse";
		return;
	}
	//node *ptr = *head;
	node *curr = *head;
	node *prev = NULL;
	node *forw = NULL;
	
	while(curr!=NULL)
	{
	 	forw = curr->next;
	 	curr->next = prev;
	 	prev = curr;
	 	curr = forw;
	 	
	}
	*head = prev;
	return ;
	
}
void display(node **head)
{
	if(*head==NULL)
	{
		cout<<"Linked list is empty";
		return;
	}
	node *temp=*head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;	
	}
	//cout<<"hello";
	return;
}
int main()
{
	int n;
	cout<<"Enter the number of nodes: ";
	cin>>n;
	node *head=NULL;
	cout<<"Enter the values"<<endl;
	for(int i=0;i<n;i++)
	{
		int val;
		cin>>val;
		insert(&head,val);
	}
	display(&head);
	cout<<endl;
	reverse(&head);
	cout<<endl;
	display(&head);
	return 0;
	
}
