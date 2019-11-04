#include <stdio.h>
#include <conio.h>

void merge(int [],int,int[],int);
void sort(int [],int);

int main()
{
	int arr1[100],arr2[100],arr3[100],i,j,k=0,temp,size1,size2;
	
	printf("Enter the Size of Array1:\n");
	scanf("%d",&size1);
	
	printf("Enter the Size of Array2:\n");
	scanf("%d",&size2);
	
	printf("ARRAY1:\n");
	for(i=0;i<size1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("ARRAY2:\n");
	for(i=0;i<size2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	merge(arr1,size1,arr2,size2);
	
	return 0;
}
void merge(int arr1[],int size1,int arr2[],int size2)
{
	int arr3[100],k=0,i,size;
	for(i=0;i<size1+size2+1;i++)
	{
		if(i<size1)
		{
			arr3[i]=arr1[i];
		}
		else
		{
			arr3[i]=arr2[k];
			k++;
		}
	}
	
	printf("\nElement on Array3:\n");
	for(i=0;i<size1+size2;i++)
	{
		printf("%d\t",arr3[i]);
	}
	size=size1+size2;
	sort(arr3,size);
}
void sort(int arr3[],int size)
{
	int i,j,temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr3[i]>arr3[j])
			{
				temp=arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=temp;
			}
		}
	}
	
	printf("\n\nARRAY3 in Ascending form:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr3[i]);
	}
}
