#include <stdio.h>

int bin(int);

int main()
{
	int dec,result;
	
	printf("Enter A Decimal Number:\n");
	scanf("%d",&dec);
	
	result=bin(dec);
	printf("Equivalent Binary Number=%d",result);
	return 0;
}
int bin(int dec)
{
	static int fact=1,sum1=0;
	int ans;
	if(dec==0)
	{
		return sum1;
	}
	else if(dec!=0)
	{
		ans=dec%2;
		sum1=sum1+ans*fact;
		fact*=10;
		bin(dec/2);
	}
}
