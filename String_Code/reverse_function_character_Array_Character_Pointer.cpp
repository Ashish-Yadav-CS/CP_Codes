#include<stdio.h>
#include<string.h>
void reverse1(char *p,int start,int end)
{
	if(start>=end)
	{
		return;
	}
	char temp = p[start];
	p[start]=p[end];
	p[end]=temp;
    reverse1(p,start+1,end-1);
}
int main()
{
	char c[] = "abcdef";
	char *y = "efghi";
	reverse1(c,0,strlen(c)-1);
	printf("%s",c);
	printf("\n");
	//reverse2(y);   It is not possible
	return 0;
}
