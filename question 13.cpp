//Write a c program to find out multiplication of two matrices and then find transport of a resultant matrix .

#include<stdio.h>

int main()
{
	int sum=0,transpose[10][10],r1,r2,c1,c2,i,j,k,a[10][10],b[10][10],c[10][10];
	
	printf("Enter The Rows & Column Of Matrix A:\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter The Rows & Column Of Matrix B:\n");
	scanf("%d%d",&r2,&c2);
	
	if(c1!=r2)
	{
		printf("\nA/c To Rule Of Multiplication Column Of Matrix A Equal To Row Of Matrix B.\n");
		return 0;
	}
	else
	{
		printf("Enter Elements Of Matrix A:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		
		printf("Enter Elements Of Matrix B:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		
		printf("\nElements In Matrix A:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		
		printf("\nElements In Matrix B:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<r2;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;
				sum=0;
			}
		}
		
		printf("\nMultiplication of Matrix:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				transpose[j][i]=c[i][j];
			}
		}
		
		printf("\nTranspose of Resultant Matrix:\n");
		for(i=0;i<c2;i++)
		{
			for(j=0;j<r1;j++)
			{
				printf("%d\t",transpose[i][j]);
			}
			printf("\n");
		}
	}
	
	return 0;
}
