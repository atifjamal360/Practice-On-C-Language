//Write a c program to reverse any number.

#include<stdio.h>

int main()
{
	int number,reverse=0,remainder;
	
	printf("ENTER A NUMBER:");
	scanf("%d",&number);
	
	while(number!=0)
	{
		remainder=number%10;
		reverse=reverse*10+remainder;
		number/=10;
	}
	printf("\nREVERSE FORM OF NUMBER IS:%d",reverse);
	return 0;
}
