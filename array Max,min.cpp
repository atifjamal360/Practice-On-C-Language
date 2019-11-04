#include <stdio.h>
#include <conio.h>

void max(int [],int);
void min(int [],int);

int main()
{
	int a[100],i,size;
	
	printf("Enter the size of array: ");
	scanf("%d",&size);
	
	printf("\nEnter Elements On Array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Elements On Array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	
	// For maximum Element in Array
	
	printf("\n\nMaximum number in Array: ");
	max(a,size);
	
	// For minimum Element in Array
	
	printf("\n\nMinimum number in Array: ");
	min(a,size);
	
	return 0;
}
void max(int a[],int size)
{
	int i,max;
	max=a[0];
	for(i=1;i<size;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("%d",max);
}

void min(int a[],int size)
{
	int i,min;
	min=a[0];
	for(i=1;i<size;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("%d",min);
}
