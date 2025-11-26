#include<iostream>
using namespace std;
class node
{
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
	node *ptr = *head;
	while(ptr->next!=NULL)
	{
      ptr = ptr->next; 
	}
	ptr->next = temp;
	return;
}
void display(node **head)
{
	node *ptr = *head;
	if(*head ==NULL)
	{
		cout<<"linked list is empty :"<<endl;
		return ;
	}
	while(ptr!=NULL)
	{
		cout<<ptr->data <<"->";
		ptr = ptr->next;
	}
	cout<<"NULL"<<endl;
	return ;
}
int main()
{
	node *head = NULL;
	int n;
	int val;
	cout<<"Enter the number of nodes : ";
	cin>>n;
	while(n)
	{
		cin>>val;
		insert(&head,val);
		n--;
	}
	merge(&head)
	display(&head);
	return 0;
}
