//Program to find largest of n numbers in c.

#include<stdio.h>

int main()
{
	int i,number,big,num;
	
	printf("ENTER A RANGE:");
	scanf("%d",&number);
	
	printf("Enter %d number:",1);
	scanf("%d",&big);
	
	for(i=2;i<=number;i++)
	{
		printf("Enter %d number:",i);
		scanf("%d",&num);
		if(big<num)
		{
			big=num;
		}
	}
	printf("\nLargest number is %d",big);
	return 0;
}
