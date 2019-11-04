//Write a c program for insert an element at desired position in an array.

#include<stdio.h>

int main()
{
	int arr[20],size,num,pos,i;
	
	printf("size of array:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter %d element in array:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nInsert number:");
	scanf("%d",&num);
	printf("\nInsert position for new number:");
	scanf("%d",&pos);
	
	for(i=size;i>=pos;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos-1]=num;
	printf("\n");
	for(i=0;i<size+1;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
