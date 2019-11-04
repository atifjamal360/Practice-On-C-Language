#include <stdio.h>
#include <conio.h>

int main()
{
	int arr1[5]={5,2,3,4,1};
	int arr2[5]={9,6,8,7,10},arr3[10];
	int i,j,k=0,temp;
	
	printf("Array 1 :\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr1[i]);
	}
	
	printf("\n\nArray 2 :\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",arr2[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(i<=4)
		{
			arr3[i]=arr1[i];
		}
		else
		{
			arr3[i]=arr2[k];
			k++;
		}
	}
	printf("\n\nAfter Merging of Array 1&2 :\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr3[i]);
	}
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr3[i]>arr3[j])
			{
				temp=arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=temp;
			}
		}
	}
	printf("\n\nSorting of Merging Array in Ascending Form:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr3[i]);
	}
	
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(arr3[i]<arr3[j])
			{
				temp=arr3[i];
				arr3[i]=arr3[j];
				arr3[j]=temp;
			}
		}
	}
	printf("\n\nSorting of Merging Array in Descending Form:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",arr3[i]);
	}

	return 0;	
}
