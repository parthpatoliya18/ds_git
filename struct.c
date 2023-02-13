#include<string.h>
#include<stdio.h>
struct student
{
	int Rollno;
	char name[10];
	int m1,m2,m3,total;
	float per;
};

int main()
{
	int i;
	struct student st[5];
	printf("Enter Records of 2 students");
	for(i=0;i<2;i++)
	{
		printf("\n Enter Rollno :");
		scanf("%d",&st[i].Rollno);
		printf("\n Enter name :");
		scanf("%s",&st[i].name);
		printf("\n Enter m1 :");
		scanf("%d",&st[i].m1);
		printf("\n Enter m2 :");
		scanf("%d",&st[i].m2);
		printf("\n Enter m3 :");
		scanf("%d",&st[i].m3);
	}

	printf("\n Student information list :");
	for(i=0;i<2;i++)
	{
		st[i].total=st[i].m1+st[i].m2+st[i].m3;
		st[i].per=st[i].total/3;

		printf("\n Rollno : %d \n Name : %s",st[i].Rollno,st[i].name);
		printf("\n total : %d \n percentage : %f",st[i].total,st[i].per);
	}

}
















