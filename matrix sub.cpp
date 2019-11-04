#include <stdio.h>
#include <conio.h>

int sub_arr(int[][100],int[][100],int[][100],int,int);

int main()
{
	int a[100][100],b[100][100],sub[100][100],i,j,size1,size2;
	
	printf("Enter the No. of rows & columns of matrices A,B: \n");
	scanf("%d%d",&size1,&size2);
	
	printf("\nEnter Element of Array A: \n");
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
		    scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("\nEnter Element of Array B: \n");
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
		    scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nElements in Array A:\n");
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nElements in Array B:\n");
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	sub_arr(a,b,sub,size1,size2);
		
	return 0;
}
int sub_arr(int a[][100],int b[][100],int sub[][100],int size1,int size2)
{
	int i,j;
	
	printf("\nSubtraction of Matrices A & B:\n");
	
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			sub[i][j]=a[i][j]-b[i][j];
			printf("%d\t",sub[i][j]);
		}
		printf("\n");
	}
}
