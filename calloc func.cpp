#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	typedef int (num);
	num i,s,*ptr,*p,sum=0;
	
	printf("Enter Size of An array:");
	scanf("%d",&s);
	
	ptr=(int*)calloc(s,sizeof(int));
	
	printf("\nAddress Of Elements:\n",s);
	for(i=0;i<s;i++)
	{
		printf("%x\t",ptr+i);
	}
	
	printf("\n\nEnter %d Elements:\n",s);
	for(i=0;i<s;i++)
	{
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	
	printf("\nSum Of Elements:%d",sum);
	
	free(ptr);
	return 0;
	
}
