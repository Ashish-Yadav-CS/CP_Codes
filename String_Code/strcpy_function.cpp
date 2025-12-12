#include<stdio.h>
void my_strcpy(char *str,char *result)
{
	int i=0;
	while(str[i]!=0)
	{
		result[i] = str[i];
		i++;
	}
	result[i]='\0';
}
int main()
{
	char str[] = "abcdef";
	char result[]="";
	my_strcpy(str,result);
	printf("%s",result);
	return 0;
}
