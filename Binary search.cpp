#include<stdio.h>

int main()
{
	int search,a[100],i,size,f,l,m;
	
	printf("Enter the Size of Array:");
	scanf("%d",&size);
	
	printf("\nEnter Element Of Array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter Number you want to search: ");
	scanf("%d",&search);
	
	f=0;
	l=size-1;
	
	while(f<=l)
	{
		m=(f+l)/2;
		if(search==a[m])
		{
			printf("%d found at location %d",search,m+1);
			return 0;
		}
		else if(search<a[m])
		{
			l=m-1;
		}
		else
		{
			f=m+1;
		}
	}
	return 0;
}
