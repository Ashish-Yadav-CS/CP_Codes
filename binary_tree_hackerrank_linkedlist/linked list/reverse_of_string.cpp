

/* Output string in the form of abcd X dcba */


#include<stdio.h>
int main()
{
	char s[10], r[10];
	int begin,end , count=0;
	
	printf("Enter the Input string : ");
	gets(s);
	
	while(s[count]!='\0')
	{
		count++;
	}
	end = count-1;
	for(begin=0;begin<count;begin++)
	{
		r[begin] = s[end];
		end--;
	}
	
	r[begin] = '\0';
	
	printf("%s\n", r);
	printf("%s",s);printf("%s","C");printf("%s\n",r);
	
	
	return 0;
}
