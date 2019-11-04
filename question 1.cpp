//1)Write a c program to print Fibonacci series of given range.

#include<Stdio.h>

int main()
{
	int first=0,second=1,i,temp,number;
	
	printf("Enter the range of FABONACCI SERIES:");
	scanf("%d",&number);
	
	for(i=0;i<number;i++)
	{
		if(i<=1)
		{
			printf("%d ",i);
		}
		else
		{
			temp=first+second;
			first=second;
			second=temp;
			printf("%d ",temp);
		}
	}
	return 0;
}
