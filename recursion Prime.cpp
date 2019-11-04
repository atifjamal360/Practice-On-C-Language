#include<Stdio.h>

int chck(int,int);
int main()
{
	int result,num;
	
	printf("Enter A number:\n");
	scanf("%d",&num);
	if(num==1)
	{
		printf("1 HAS ONLY FACTOR.");
	}
	else
	{
		result=chck(2,num);
		if(result==0)
		{
			printf("\"%d\" Is Prime.",num);
		}
		else
		{
			printf("\"%d\" Is Not Prime.",num);
		}
	}
	return 0;
}
int chck(int a,int b)
{
	if(a==b)
	{
		return 0;
	}
	else if(b%a==0)
	{
		return 1;
	}
	else
	{
		return (chck(a+1,b));
	}
}
