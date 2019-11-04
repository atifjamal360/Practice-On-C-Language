#include<stdio.h>

int main()
{
	int i,j,k,sp=1,rows;
	
	printf("Enter a number of rows:");
	scanf("%d",&rows);
	
	printf("\n");
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<sp;j++)
		{
			printf(" ");
		}
		sp++;
		for(k=1;k<=rows-i;k++)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
}
