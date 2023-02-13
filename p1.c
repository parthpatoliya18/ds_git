#include<stdio.h>
int main()
{
	int a=100,b=60,c=30;
	(a>b)?
	(a>c?printf("\n a(%d)",a):printf("\n c(%d)",c)):
	(b>c?printf("\n b(%d)",b):printf("\n c(%d)",c));
}