//Write a c program to check given number is palindrome number or not.

#include<stdio.h>
int main()
{
	int i,number,original,remain,check=0;
	
	printf("ENTER A NUMBER:");
	scanf("%d",&number);
	
	original=number;
	
	while(number!=0)
	{
		remain=number%10;
		check=check*10+remain;
		number/=10;
	}
	if(check==original)
	{
		printf("\n\"%d\" IS PALINDROME NUMBER",original);
	}
	else
	{
		printf("\n\"%d\" IS NOT PALINDROME NUMBER",original);
	}
	return 0;
}
