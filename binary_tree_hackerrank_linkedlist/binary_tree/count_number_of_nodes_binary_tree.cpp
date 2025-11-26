#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *left, *right;
		
};
int leaf_nodes(node *root)
{
	if(root==NULL)
	return 0;
	if(root->left==NULL&&root->right==NULL)
	return 1;
	return leaf_nodes(root->left)+leaf_nodes(root->right);	
}
int height(node *root)
{
	if(root==NULL)
	return 0;
	return max(height(root->left),height(root->right))+1;
}
int sum_of_data(node *root)
{
	if(root==NULL)
	return 0;
	return sum_of_data(root->left)+sum_of_data(root->right)+root->data;
}   
int main()
{
	int i,j,k;
	node *root = new node();
	root->data = 5;
	
	node *temp1 = new node();
	temp1->data = 15;
	root->left = temp1;
	
	node *temp2 = new node();
	temp2->data = 20;
	root->right = temp2;
	
	node *temp3 = new node();
	temp3->data = 25;
	root->left->left = temp3;
	
	node *temp4 = new node();
	temp4->data = 30;
	root->left->right = temp4;
	
	node *temp5 = new node();
	temp5->data = 35;
	root->right->left = temp5;
	
	node *temp6 = new node();
	temp6->data = 40;
	root->right->right = temp6;

    node *temp7 = new node();
	temp7->data = 45;
	root->left->left->left = temp7;
	
	
    node *temp8 = new node();
	temp8->data = 50;
	root->left->left->right = temp8;
		
	cout<<"height of the tree is : "<<height(root)<<endl;
	cout<<"sum of all the nodes " << sum_of_data(root)<<endl;
	cout<<"leaf nodes are "<<leaf_nodes(root)<<endl;
	return 0;
}
