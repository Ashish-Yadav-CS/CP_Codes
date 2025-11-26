#include<iostream>
using namespace std;
int count;
class node
{
  public:
   int data;
   node *next;	
};
int count1(node **head)
{
	node *temp = *head;
	static int count = 0;
	if(*head==NULL)
	{
		return 0;
	}
	while(temp!=NULL)
	{
		count = count+1;
		temp =  temp->next;
	}
	return count;
}
void insert(node **head, int val)
{
	node *temp = new node();
	temp->data = val;
	temp->next = NULL;
	if(*head == NULL)
	{
		*head = temp;
		return ;
	}
	node *ptr = *head;
	while(ptr->next!=NULL)
	{
		ptr = ptr->next;
		
	}
	ptr->next = temp;
	return ;
}
void display(node **head)
{
	if(*head==NULL)
	{
		cout<<"Nothing to show"<<endl;
		return ;
	}
	node *ptr1  = *head;
	while(ptr1!=NULL)
	{
		cout<<ptr1->data<<"->";
		ptr1 = ptr1->next;
	}
	cout<<"NULL"<<endl;
}
/*void delete(node **head, int val)
{
	node *temp = *head;
	
}*/
void operation(node **head)
{
  node *temp = *head;
  while(temp!=NULL)
  {
  	cout<<temp->data<<"->";
  	if(temp->next!=NULL)
  	{
  	temp = temp->next->next;	
	}
	else
	 break;
  }	
  cout<<"NULL"<<endl;
  return;
  
}
int main()
{
int i,j,k;
int val, n;
node *head = NULL;
cout<<"total number of nodes to be inserted into the linked list : ";
cin>>n;
if(n==0)
{
	cout<<"nothing is inserted Linked list is empty"<<endl;
}
else
{

while(n)
{
	cin>>val;
	insert(&head,val);
	n--;
}
cout<<"insertion done"<<endl;
display(&head);
count = count1(&head);
cout<<"Length of Linked list is : "<<count<<endl;
operation(&head);
}
return 0;

}
