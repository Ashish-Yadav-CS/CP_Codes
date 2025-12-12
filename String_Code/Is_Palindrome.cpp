#include<stdio.h>
#include<string.h>
bool Is_palindrome(char *str,int start,int end)
{
	if(start>end)
	{
		return 1;
	}
	if(str[start]!=str[end])
	{
		return 0;
	}
	Is_palindrome(str,start+1,end-1);
}
int main()
{
	char str[] = "abcdcbea";
	if(Is_palindrome(str,0,strlen(str)-1)){
		printf("Yes, Given String is Palindrome");
	}
	else
	{
	 printf("No, Given String is not Palindrome");	
	}
	return 0;
}
