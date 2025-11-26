#include<iostream>
using namespace std;
int gcd(int m,int n)
{
	if(n==0)
	return m;
	return gcd(n,m%n);
}
int main()
{
	int m,n;
	cout<<"Enter the numbers to find the gcd: ";
	cin>>m>>n;
	int rem;
	if(m>n)
	{
		rem=gcd(m,n);
	}
	else
	{
		rem=gcd(n,m);
	}
	cout<<"Gcd of two numbers is: "<<rem<<endl;
	return 0;
}

