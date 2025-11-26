
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int n,i;
	char z , o;
	cin>>n;
	char num1[n];
							// Reading input from STDIN
	for(i=0;i<n;i++)
	{
		cin>>num1[i];
	}
	static int count1=0;
	static int count2=0;
	for(i=0;i<n;i++)
	{
		if(num1[i]=='z')
		{
			count1++;
		}
		if(num1[i]=='o')
		{
			count2++;
		}
	}
	cout<<count1<<endl;
	cout<<count2<<endl;
	if(count1*2==count2)
	{
		cout<<"Yes";
	}		
	else
	{
		cout<<"No";
	}
	// Writhng output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here

