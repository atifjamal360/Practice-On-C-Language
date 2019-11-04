#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[100],loc,size,i,maximum;
	
	printf("Enter the size of array: ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("the %d element of array :",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\nElements in array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	
	maximum=arr[0];
	
	for(i=1;i<=size;i++)
	{

		if(arr[i]>maximum)
		{
			maximum=arr[i];
			loc=i+1;
		}
	}
	if(maximum==arr[0])
	loc=1;

	printf("\n\n%d is maximum at location %d",maximum,loc);
}
