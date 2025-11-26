#include<stdio.h>
union Test
{
	int x;
	char y;
	//int z;
	//char c;
	//short int y1;
	short int z;
	//double z1;
	
};

int main()
{
  union Test temp;
  temp.x = 10;
  printf("%d %d",temp.x,sizeof(temp));	
}
