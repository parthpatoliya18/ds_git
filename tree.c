#include<stdio.h>
void pettrn(int n)
{
	int i,j,sp=30;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
		sp--;
	}
}
int main()
{
		pettrn(3);
		pettrn(5);
		pettrn(7);
}