#include<Stdio.h>

int fact(int);

int main()
{
	int num,factorial=0;
	printf("Enter A Number: ");
	scanf("%d",&num);
	
	factorial=fact(num);
	
	printf("%d",factorial);
	
	return 0;
}
int fact(int num)
{
	if(num==0)
	{
		return 1;
	}
	else
	{
		return (num*fact(num-1));
	}
	
}
