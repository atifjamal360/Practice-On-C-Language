#include <stdio.h>
#include <conio.h>
#include <math.h>

void get(int[][10],int,int);
void disp(int[][10],int,int);
int sum_arr(int[][10],int[][10],int[][10],int,int);		//Addition of 2 matrix
int sub_arr(int[][10],int[][10],int[][10],int,int);		//Subtraction of 2 matrix
int transpose_arr(int [][10],int [][10],int,int);		//Transpose of a matrix
int multi_arr(int [][10], int [][10], int [][10], int, int, int, int);		//Multiplication of 2 matrix

int main()
{
	int num,choice;
	int size1,size2,i,j,a[10][10],b[10][10],sum[10][10],sub[10][10],transpose[10][10],multi[10][10];
	do
	{
		printf("\t\t ********ITS ALL ABOUT MATRIX********\n");
		printf("\nENTER YOUR CHOICE\n\n1.Addition of 2 matrix\n2.Subtraction of 2 matrix");
		printf("\n3.Transpose of a matrix\n4.Multiplication of 2 matrix\n");
		printf("\nPress:");
		scanf("%d",&num);
		
		switch(num)
		{
			case 1:
				printf("\n***Addition of 2 matrix***\n\n");
				printf("Enter the row & column of matrices: \n");
				scanf("%d%d",&size1,&size2);
				
				printf("\nEnter Element of Array1: \n");
				get(a,size1,size2);

				printf("\nEnter Element of Array2: \n");
				get(b,size1,size2);
	
				printf("\nElements in Array1:\n");
				disp(a,size1,size2);
	
				printf("\nElements in Array2:\n");
				disp(b,size1,size2);
	
				sum_arr(a,b,sum,size1,size2);
				break;
			
			case 2:
				printf("\n***Subtraction of 2 matrix***\n\n");
				printf("Enter the row & column of matrices: \n");
				scanf("%d%d",&size1,&size2);
				
				printf("\nEnter Element of Array1: \n");
				get(a,size1,size2);
	
				printf("\nEnter Element of Array2: \n");
				get(b,size1,size2);
	
				printf("\nElements in Array1:\n");
				disp(a,size1,size2);
	
				printf("\nElements in Array2:\n");
				disp(b,size1,size2);
	
				sub_arr(a,b,sub,size1,size2);
				break;
			
			case 3:
				printf("\n***Transpose of a matrix***\n\n");
				printf("Enter the Row and Column of Array:\n");
				scanf("%d%d",&size1,&size2);
	
				printf("Enter Element in Array:\n");
				get(a,size1,size2);
	
				printf("\nElements on Array:\n");
				disp(a,size1,size2);
	
				transpose_arr(a,transpose,size1,size2);
				break;
			
			case 4:
				printf("\n***Multiplication of 2 matrix***\n\n");
				int k,r1,c1,r2,c2;
	
				start:
				printf("Enter No. of rows of matrice A:\n");
				scanf("%d",&r1);
	
				printf("Enter No. of column of matrice A:\n");
				scanf("%d",&c1);
	
				printf("Enter No. of rows of matrice B:\n");
				scanf("%d",&r2);
	
				printf("Enter No. of column of matrice B:\n");
				scanf("%d",&c2);
	
				if(c1!=r2)
				{
					printf("\nColumns of 1st matrice & Rows of 2nd matrice must be equal. \n");
					printf("According to Rule of Multiplication.\n\n");
					printf("Input again.");
					goto start;
				}
	
				printf("\nEnter the Elements in matrice A:\n");
				get(a,r1,c1);
	
				printf("\nEnter the Elements in matrice B:\n");
				get(b,r2,c2);
	
				printf("Elements in matrice A:\n");
				disp(a,r1,c1);
	
				printf("\nElements in matrice B:\n");
				disp(b,r2,c2);
	
				multi_arr(a,b,multi,r1,c1,r2,c2);
				break;
			
			default:
				printf("INVALID NUMBER\n\n");				
		}
		
		printf("\nDO YOU WANT TO CONTINUE: (1/0)\n");
		scanf("%d",&choice);
	}
	while(choice==1);
	
	return 0;
}
int sum_arr(int a[][10],int b[][10],int sum[][10],int size1,int size2)
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
		
int sub_arr(int a[][10],int b[][10],int sub[][10],int size1,int size2)
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
	
	printf("Transpose of Array:\n");
	disp(transpose,size2,size1);
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
	
	printf("Multiplication of matrices A & B:\n");
	disp(multi,r1,c2);
}
void get(int a[][10],int size1,int size2)
{
	int i,j;
	for(i=0;i<size1;i++)
				{
					for(j=0;j<size2;j++)
					{
		    			scanf("%d",&a[i][j]);
					}
				}
}
void disp(int a[][10],int size1,int size2)
{
	int i,j;
	for(i=0;i<size1;i++)
				{
					for(j=0;j<size2;j++)
					{
						printf("%d\t",a[i][j]);
					}
					printf("\n");
				}
}
