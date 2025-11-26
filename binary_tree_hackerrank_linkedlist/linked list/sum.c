#include<stdio.h>
int main()
{
	long int i;
	long int n;
	printf("Enter the number \t");
	scanf("%d",&n);
	long int sum  =0;
	int count = 0;
	for(i=1;i<n;i=i+2)
	{
		sum = sum +i;
		sum = sum + (i+1);
		count++;
		
	}
	printf("Sum of the given numbers is : %d\n",sum);
	printf("%d ",count);
}
