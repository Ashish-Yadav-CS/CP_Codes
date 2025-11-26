#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n1,n2,n3;
	cin>>n1>>n2>>n3;
	int a[n1],b[n2],c[n3];
	cout<<"Enter the first array: ";
	for(i=0;i<n1;i++)
	cin>>a[i];
	cout<<endl;
	cout<<"Enter the second array: ";
	for(j=0;j<n2;j++)
	cin>>b[j];
	cout<<endl;
	cout<<"Enter the third array: ";
	for(k=0;k<n3;k++)
	cin>>c[k];
	cout<<endl;
	i=0;j=0;k=0;
	while((i<n1)&&(j<n2)&&(k<n3))
	{
		int max=(a[i]>b[j])?((a[i]>c[k])?((b[j]>c[k])?a[i]:a[i]):c[k]):((b[j]>a[i])?((a[i]>c[k])?b[j]:b[j]):c[k]);
		while((a[i]<max)&&(i<n1))
		{
			i++;
		}
		/*if(a[temp]==max)
		{
			temp=0;
		}*/
		if(i>=n1)
		{
			cout<<"no common element is present"<<endl;
			return 0;
		}
		while((b[j]<max)&&(j<n2))
		{
			j++;
		}
		/*if(b[temp]==max)
		{
			temp=0;
		}*/
		if(j>=n2)
		{
			cout<<"no common element is present"<<endl;
			return 0;
		}
		while((c[k]<max)&&(k<n3))
		{
			k++;
		}
		if(k>=n3)
		{
			cout<<"no common element is present"<<endl;
			return 0;
		}
		if(c[k]==max)
		{
			cout<<c[k];
		}
		
	}
}
