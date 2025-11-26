#include<iostream>
using namespace std;
int count;
float denominator;
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
	if(*head == NULL)
	{
		*head = temp;
		return;
	}
	node *ptr1 = *head;
	while(ptr1->next!=NULL)
	{
		ptr1  = ptr1->next;
		
	}
	ptr1->next = temp;
	return ; 
}
int couunt(node **head)
{
	int count1=0;
	if(*head==NULL)
	{
		cout<<"linked list is empty"<<endl;
		return 0;
	}
	node *ptr = *head;
	while(ptr!=NULL)
	{
		count1++;
		ptr = ptr->next;
		
	}
	return count1;
}
float median(node **head)
{
	int node_data;
	node *ptr =  *head;
	while(count)
	{
		node_data+=ptr->data;
		ptr = ptr->next;
		count--;
	}
	float median_linked_list = node_data/denominator;
	return median_linked_list;
	
}
void display(node **head)
{
	node *ptr = *head;
	if(*head==NULL)
	{
		cout<<"linked list is empty"<<endl;
		return;
	}
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"->";
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
	cout<<"enter the number of nodes in the linked list :";
	cin>>n;
	while(n)
	{
		cin>>val;
		insert(&head,val);
		n--;
	}
	count = couunt(&head);
	cout<<"number of nodes in linked list : "<<count<<endl;
	denominator = count;
	float median_of_linked_list = median(&head);
	cout<<"median_of_linked_list is :"<<median_of_linked_list<<endl;
	display(&head);
	return 0;
}
