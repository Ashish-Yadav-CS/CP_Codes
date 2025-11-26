#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long int n;
	cout<<"Enter the number:"<<endl;

	
	cin>>n;
	int flag=0;
	int l  = sqrt(n);
	for(int i=2;i<=l;i++)
	{
		if(n%i==0)
		{
		    flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		cout<<"Number is not prime"<<endl;
	}
	if(flag==0)
	{
		cout<<"Number is prime"<<endl;
	}

}
