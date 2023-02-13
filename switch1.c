#include<stdio.h>
int main()
{
	int ch;
	printf("\n Enter your choice : ");
	scanf("%d",&ch);
	switch(ch)

	{
		case 1:
				printf("\n moday");
		break;
	
		case 2:
				printf("\n tuesday");
		break;
	
		case 3:
				printf("\n wensday ");
		break;
	
		case 4:
				printf("\n thursday");
		break;
	
		case 5:
				printf("\n friday");
		break;

		default:
				printf("\n wrong chioce....");
		break;
	}
}