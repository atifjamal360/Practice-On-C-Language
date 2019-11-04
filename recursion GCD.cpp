#include<stdio.h>

int GCD(int,int);
int main()
{
	int num1,num2,result;
	
	printf("Enter Two Numbers:\n");
	scanf("%d%d",&num1,&num2);
	
	result=GCD(num1,num2);
	
	printf("The GCD of %d & %d = %d",num1,num2,result);
	return 0;
}
int GCD(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else if(a<b)
	{
		return (GCD(b,a));
	}
	else
	{
		return GCD(b,a%b);
	}
}
