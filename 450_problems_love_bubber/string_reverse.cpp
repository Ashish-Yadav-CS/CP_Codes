#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rev(char str[],int start,int last)
{
	if(start>=last)
	{
		return ;
	}
	char temp = str[start];
	str[start] = str[last];
	str[last] = temp;
	return rev(str,start+1,last-1);
}
int main()
{
	int n;
	cin>>n;
	char str[n];
	cout<<"Enter the string: ";
	for(int i=0;i<n;i++)
	{
		cin>>str[i];
	}
	rev(str,0,n-1);
	cout<<str;
}
