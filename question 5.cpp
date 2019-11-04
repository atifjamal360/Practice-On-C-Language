//C program to count number of digits in a number.

#include<stdio.h>

int main()
{
	int original,number,count=0;
	
	printf("ENTER A NUMBER:");
	scanf("%d",&number);
	
	original=number;
	
	while(number!=0)
	{
		number%10;
		number/=10;
		count++;
	}
	printf("NUMBER OF DIGITS IN \"%d\" are %d",original,count);
	
	return 0;
}
