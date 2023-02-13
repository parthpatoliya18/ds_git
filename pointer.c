#include<stdio.h>
int main()
{
	int a=10,b=20;
	int *x,*y,p;

	x=&a;
	y=&b;

	p=*x;
	*x=*y;
	*y=p;

	printf("value of a : %d",*x);
	printf("\n value of b : %d",*y);
}