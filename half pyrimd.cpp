#include <stdio.h>

int main()
{
	int i,j,row,space;
	
	printf("Enter the number of rows:");
	scanf("%d",&row);
	
	space = row;
	for( i=1;i<=row;i++)
	{
		for( j=1;j<=space;j++)
		{
			printf(" ");
		}
		space--;
		for( j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	space = 2;
	for( i=1;i<=row;i++)
	{
		for( j=1;j<=space;j++)
		{
			printf(" ");
		}
		space++;
		for( j=1;j<=2*(row-i)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
