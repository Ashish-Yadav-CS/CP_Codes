//number of array element found within the limit

#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int lower_limit,upper_limit;
	cin>>lower_limit>>upper_limit;
	int count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]>lower_limit&&arr[i]<upper_limit)
		{
			count++;
		}
	}
	cout<<"Number of element found within the limit : "<<count;
}
