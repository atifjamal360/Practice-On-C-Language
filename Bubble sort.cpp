#include<stdio.h>

int main()
{
	int a[50],swap,temp,size,i,j;

	printf("Enter A Size Of Array:");
	scanf("%d",&size);

	printf("\nEnter Elements:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size-1;i++)
	{
		swap=0;
		for(j=0;j<(size-i)-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			swap=1;
		}
		if(swap==0)
		break;
	}
	printf("\nSorted Elements:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}
