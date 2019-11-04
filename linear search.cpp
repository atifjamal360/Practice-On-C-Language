#include<stdio.h>

int main()
{
	int a[50],size,i,j,temp=0,search;
	
	printf("Enter A Size Of Array:");
	scanf("%d",&size);
	
	printf("\nEnter Element:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter A No. To Search In Array:");
	scanf("%d",&search);
	
	for(j=0;j<size;j++)
	{
		if(search==a[j])
		{
			printf("\n\"%d\" is present in Array at location %d.",search,j+1);
			temp++;
		}
	}
	
	if(temp==0)
	{
		printf("\n\"%d\" is not present in Array.",search);
	}
	return 0;
}
