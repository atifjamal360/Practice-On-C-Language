//C program to find largest and smallest number in an array

#include<stdio.h>

int main()
{
	int arr[20],size,i,max,min;
	
	printf("Enter A Size Of Array:");
	scanf("%d",&size);
	
	printf("\n");
	
	for(i=0;i<size;i++)
	{
		printf("%d Element In Array Is:",i+1);
		scanf("%d",&arr[i]);
	}
	
	max=arr[0];
	
	for(i=1;i<size;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("\nGreatest Number In Array:%d",max);	
	
	min=arr[0];
	
	for(i=1;i<size;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("\nSmallest Number In Array:%d",min);
	
	return 0;
}
