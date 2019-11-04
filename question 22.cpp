//Write a c program for delete an element at desired position in an array.

#include<stdio.h>

int main()
{
	int arr[20],size,i,pos;
	printf("Enter the size of array:");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("%d element of array:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nELEMENT ON ARRAY IS:\n");
	
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n\nENTER A POSITION OF A NUMBER WHICH YOU WANT TO DLETE FORM ARRAY:\n");
	scanf("%d",&pos);
	
	for(i=pos-1;i<size;i++)
	{
		arr[i]=arr[i+1];
	}
	
	for(i=0;i<size-1;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
