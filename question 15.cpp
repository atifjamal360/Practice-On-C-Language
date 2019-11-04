#include <stdio.h>
#include <math.h>

int main()
{
	int number,n=0,original,check=0,sum=0;
	printf("ENTER A NUMBER:");
	scanf("%d",&number);
	
	original=number;
	
	if(number>10)
	{
		while(number!=0)
		{
			number%10;
			number/=10;
			n++;
		}
	}
	else
	{
		n=3;
	}
	
	number=original;
	
	do
	{
		check=number%10;
		sum=sum+pow(check,n);
		number/=10;
	}
	while(number!=0);
	
	if(sum==original)
	{
		printf("\n\"%d\" IS ARMSTRONG NUMBER",original);
	}
	else
	printf("\n\"%d\" IS NOT ARMSTRONG NUMBER",original);
	
	return 0;
}
