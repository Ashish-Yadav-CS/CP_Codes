#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of element: ";
	cin>>n;
	int k;
	cout<<"Enter the target value: ";
	cin>>k;
	int arr[n];
	cout<<"Enter the array element: ";
	for(int i=0;i<n;i++)
	{
		
	 cin>>arr[i];	
	}
	int n1;
	int n2;
	int p=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
			p++;
			if(p==1)
			{
			  n1 = i;
			  n2 = i;
			}
			
			if(p>1)
			{
				n2=i;
			}
		}
	}
	cout<<n1<<" "<<n2;
}
