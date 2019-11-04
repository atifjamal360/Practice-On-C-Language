#include<stdio.h>

int sum(int);

int main()
{
	int num,result;
	
	printf("Enter A Number:\n");
	scanf("%d",&num);
	
	result=sum(num);
	printf("Sum Of Digits=%d",result);
	
	return 0;
}
int sum1=0;
int sum(int num)
{
	int ans;
	if(num==0)
	{
		return sum1;
	}
	else if(num>0)
	{
		ans=num%10;
		sum1=sum1+ans;
		sum(num/10);
	}
}
