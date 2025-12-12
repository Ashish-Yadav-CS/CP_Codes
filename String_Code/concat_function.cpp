#include<stdio.h>
void my_strcat(char *str1,char *str2,char *result)
{
	int i=0;
	while(str1[i]!='\0')
	{
		result[i] = str1[i];
		i++;
	}
	int j=0;
	while(str2[j]!='\0')
	{
		result[i] = str2[j];
		i++;
		j++;
	}
	result[i] = '\0';
}
int main()
{
	char str1[] = "abcdef";
	char str2[] = "ghijkl";
	char result[100];
	my_strcat(str1,str2,result);
	printf("%s\n",result);
	return 0;
}
