//Write a c program which deletes the duplicate element of an array.

#include<stdio.h>

int main()
{
	int arr[20],size,i,j,k;

	printf("Enter Size Of Array:\n");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("%d Element In Array:",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;)
		{
			if(arr[i]==arr[j])
			{
				size--;
				for(k=j;k<size;k++)
				{
					arr[k]=arr[k+1];
				}
			}
			else 
			j++;
		}
	}
	
	printf("\nNew Array Is:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
