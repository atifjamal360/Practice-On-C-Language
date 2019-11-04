//Write a c program to check whether a number is strong or not.

#include<stdio.h>

int main()
{
	int fact,number,original,remain=0,sum,final=0;
	printf("ENTER A NUMBER:");
	scanf("%d",&number);
	
	original=number;
	
	while(number!=0)
	{
		remain=number%10;
		sum=1;
		for(fact=1;fact<=remain;fact++)
		{
			sum=sum*fact;
		}
		
		final=final+sum;
		number/=10;
	}
	if(final==original)
	{
		printf("%d IS STRONG NUMBER",original);
	}
	else
	{
		printf("%d IS NOT STRONG NUMBER",original);
	}
	
	return 0;
}
