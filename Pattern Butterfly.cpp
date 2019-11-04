#include<stdio.h>

int main()
{
	int i,j,rows,n;
	printf("Enter No. Of Rows:");
	scanf("%d",&rows);
	n=rows*2;
	
	printf("\n");
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows*2-1;j++)
		{
			if(j<=i||j>=n-i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows*2-1;j++)
		{
			if(j<=rows-i||j>=rows+i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}
