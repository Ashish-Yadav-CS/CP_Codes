#include<iostream>
using namespace std;
class node
{
  int data;
  node *left, *right;	
};
void insert(node *&root , int val;)
{
	node *temp = new node();
	temp->data = val;
	temp->right  = NULL;
	temp->left = NULL:
	if(root==NULL)
	{
		root = temp;
		return ;
	}
	if(root->data>val)
	{
		insert(root->left,val);
	}
	else
	{
		insert(root->righ,val);
	}
	return ;
}

int height(node *root)
{
	if(root==NULL)
	return 0;
	return max(height(root->left),height(root->right))+1;
}
int max3(int a , int b , int c)
{
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
			{
				return a;
			}
			return a;
		}
	}
	else
	{
		if(b>c)
		{
			return b;
		}
		else
		{
			return c;n
		}
	}
}

int main()
{
    node *root = NULL;
	int n;
	int val;
	cin>>n;
	while(n)
	{
		cin>>val;
		insert(&root,val);
		n--;
	}
	
}
