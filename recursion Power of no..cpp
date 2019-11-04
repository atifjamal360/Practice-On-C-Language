#include<stdio.h>
#include<conio.h>

int power(int,int);

int main()
{
	int num,ex,result;
	printf("Enter A Number: ");
	scanf("%d",&num);
	
	printf("Enter Power of %d: ",num);
	scanf("%d",&ex);
	
	result=power(num,ex);
	
	printf("Result of %d^%d=%d",num,ex,result);
	
	return 0;
}
int power(int a,int b)
{
	if(b==0)
	{
		return 1;
	}
	else
	return (a*power(a,b-1));
}
