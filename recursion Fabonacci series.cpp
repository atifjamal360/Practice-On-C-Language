#include<stdio.h>

int fab(int);

int main()
{
	int i,num,result;
	printf("Enter The Range Of Fabonacci Series:\n");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		result=fab(i);
		printf("%d ",result);
	}
	return 0;
}

int fab(int i)
{
	if(i<=1)
	{
		return i;
	}
	else
	return fab(i-1)+fab(i-2);
}

