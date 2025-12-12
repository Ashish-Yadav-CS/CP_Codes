#include<stdio.h>
int my_strlen(char *a)
{
	int i=0;
	while(a[i]!=0)
	{
		i++;
	}
	return i;
}
int main()
{
 char str[] = "abcdef";
 int l = my_strlen(str);
 printf("%d",l);
 return 0;
}
