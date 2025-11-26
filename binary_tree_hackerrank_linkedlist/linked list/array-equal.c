#include<stdio.h>
int main()
{
	int B[4]; 
	int A[4] = {1,2,3,4};
	 B[2] = A[3];
	printf("%d\n",B[2]);
	 int i = A[2]++;
	printf("%d",&A);
	
}
