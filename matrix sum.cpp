#include <stdio.h>
#include <conio.h>

int sum_arr(int[][100],int[][100],int[][100],int,int);

int main()
{
	int a[100][100],b[100][100],sum[100][100],i,j,size1,size2;
	
	printf("Enter the row & column of matrices: \n");
	scanf("%d%d",&size1,&size2);
	
	printf("\nEnter Element of Array1: \n");
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
		    scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("\nEnter Element of Array2: \n");
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
		    scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nElements in Array1:\n");
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nElements in Array2:\n");
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	sum_arr(a,b,sum,size1,size2);
		
	
	return 0;
}
int sum_arr(int a[][100],int b[][100],int sum[][100],int size1,int size2)
{
	int i,j;
	
	printf("\nSum of Matrices:\n");
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}
