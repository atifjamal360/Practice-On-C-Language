//Write a c program to check given number is prime number or not.

#include<stdio.h>

int main()
{
	int number,i;
	
	printf("ENTER A NUMBER:");
	scanf("%d",&number);
	
	for(i=2;i<number;i++)
	{
		if(number%i==0)
		{
			printf("%d is not prime ",number);
			break;
		}		
	}
	if(i==number)
	{
		printf("%d is prime number",number);
	}
	return 0;
}
