#include<iostream>
#include<string.h>
using namespace std;
int palindrome_check(char *str,int last,int start)
{
	if(start>last)
	return 1;
	if(str[start]!=str[last])
	return 0;
	if(str[start]==str[last])
	return palindrome_check(str,last-1,start+1);
}
int main()
{
	char str[100];
	cin>>str;
	cout<<palindrome_check(str,(strlen(str)-1),0);
	return 0;
}
