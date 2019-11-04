//Write a c program to swap two numbers without using third variable.

#include<stdio.h>

int main()
{
	int a,b;
	printf("ENTER 1st NUMBER:");
	scanf("%d",&a);
	printf("ENTER 2nd NUMBER:");
	scanf("%d",&b);
	
	printf("\nBEFORE SWAPPING.\n");
	printf("1st=\"%d\"\n2nd=\"%d\"",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n\nAFTER SWAPPING.\n");
	printf("1st=\"%d\"\n2nd=\"%d\"",a,b);
	return 0;
}

