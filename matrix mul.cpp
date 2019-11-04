#include<stdio.h>
#include<conio.h>

int multi_arr(int [][10], int [][10], int [][10], int, int, int, int);

int main()
{
	
	int a[10][10],b[10][10],multi[10][10];
	int i,j,k,r1,c1,r2,c2,sum=0;
	
	start:
	printf("Enter No. of rows & column of matrice A:\n");
	scanf("%d%d",&r1,&c1);
	
	printf("Enter No. of rows & column of matrice B:\n");
	scanf("%d%d",&r2,&c2);
	
	
	if(c1!=r2)
	{
		printf("\nColumns of 1st matrice & Rows of 2nd matrice must be equal. \n");
		printf("According to Rule of Multiplication.\n\n");
		goto start;
	}
	
	printf("\nEnter the Elements in matrice A:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nEnter the Elements in matrice B:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("Elements in matrice A:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nElements in matrice B:\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	
	multi_arr(a,b,multi,r1,c1,r2,c2);
	
	return 0;
}
int multi_arr(int a[][10], int b[][10], int multi[][10],int r1,int c1,int r2,int c2)
{
	int i,j,k,sum=0;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<c1;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			multi[i][j]=sum;
			sum=0;
		}
	}
	
	printf("\nMultiplication of matrices A & B:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",multi[i][j]);
		}
		printf("\n");
	}
}
