#include<Stdio.h>
#include<conio.h>

void evenodd(int,int);

int main()
{
	int range;
	
	printf("Enter Range To Check Even,Odd: ");
	scanf("%d",&range);
	
	printf("Even Numbers:\n");
	evenodd(2,range);
	
	printf("\nOdd Numbers:\n");
	evenodd(1,range);
	
	return 0;
}
void evenodd(int a,int b)
{
	if(a>b)
	{
		return;
	}
	printf("%d  ",a);
	evenodd(a+2,b);
}
