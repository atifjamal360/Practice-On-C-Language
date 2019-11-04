#include<stdio.h>
void swap(int *, int *);

int main()
{
	int a,b;
	
	printf("Enter two numbers: \n");
	scanf("%d%d",&a,&b);
	
	swap(&a,&b);
	return 0;
}
void swap(int *a,int *b)
{	
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	
	printf("\nAfter swapping:\n%d %d",*a,*b);
}
