#include<stdio.h>
#include<conio.h>

int transpose_arr(int [][10],int [][10],int,int);

int main()
{
	int a[10][10],transpose[10][10],i,j,size1,size2;
	
	printf("Enter the Row and Column of Array:\n");
	scanf("%d%d",&size1,&size2);
	
	printf("Enter Element in Array:\n");
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nElements on Array:\n");
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	transpose_arr(a,transpose,size1,size2);
	
	return 0;
}
int transpose_arr(int a[][10],int transpose[][10],int size1,int size2)
{
	int i,j;
	
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			transpose[j][i]=a[i][j];
		}
		printf("\n");
	}
	
	printf("\nTranspose of Array:\n");
	for(i=0;i<size2;i++)
	{
		for(j=0;j<size1;j++)
		{
			printf("%d\t",transpose[i][j]);
		}
		printf("\n");
	}
}
