#include<stdio.h>

int LCM(int,int);
int main()
{
	int num1,num2,result;
	
	printf("Enter Two Numbers:\n");
	scanf("%d%d",&num1,&num2);
	
	result=LCM(num1,num2);
	
	printf("The LCM of %d & %d = %d",num1,num2,result);
	return 0;
}
int LCM(int a,int b)
{
	static int i=1;
	if(i%a==0&&i%b==0)
	{
		return i;
	}
	else
	{
		i++;
		LCM(a,b);
	}
}
