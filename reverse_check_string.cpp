#include<iostream>
using namespace std;
int main()
{
	char x[100];
	int n;
	cin>>n;
	int i;
	char C;
	for(i=0;i<n;i++)
	{
		cin>>x[i];
		if(x[i]==C)
		{
			break;
		}
	}
	int count = 0;
	while(x[i]!='C')
	{
		count++;
	}
	cout<<count;
}
