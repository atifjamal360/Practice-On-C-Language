//Write a c program to find out sum of diagonal element of a matrix.

#include<stdio.h>

int main()
{
	int sum=0,i,j,size1,size2,a[10][10],b[10][10];
	printf("Enter No. Of Row & Column Of Matrixes:\n");
	scanf("%d%d",&size1,&size2);
	
	if(size1==size2)
	{
		printf("Enter Elements Of Matrix A:\n");
		for(i=0;i<size1;i++)
		{
			for(j=0;j<size2;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}

		printf("Elements Of Matrix A:\n");
		for(i=0;i<size1;i++)
		{
			for(j=0;j<size2;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	
		for(i=0;i<size1;i++)
		{
			for(j=0;j<size2;j++)
			{
				if(i==j)
				{
					sum=sum+a[i][j];
				}
			}
		}
		printf("\nSum Of Diagonal: ");
		printf("%d",sum);
	}
	else
	printf("\nNO. OF ROWS AND COLUMN MUST BE EQUAL FOR SUM OF DIAGONAL.");
	
	return 0;
}
