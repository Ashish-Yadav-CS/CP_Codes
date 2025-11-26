#include <stdio.h>
int y = 20;
int &f(int a)
 {
	y = y+a;
	return y;
 }
 int main()
 {
  int x  = 100;
  int c = 50, d = 10;
  f(x) = (c+d);
  printf("%d%d",x,y);
 }


 
