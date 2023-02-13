#include<stdio.h>
int main()
{
	int a[10]={10,20,30,40,50};
	int size;
	int *p;


	size =sizeof(a);
	printf(" size of array=%d",size);

	p=a;
	printf("\n size of array using *p=%u",p);

}