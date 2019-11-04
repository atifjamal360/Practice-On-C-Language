#include<stdio.h>

int main()
{
	int i,j,k=4;
	for(i=0;i<=4;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			if(j>=2&&j<=4-i)
			{
				printf("%d",k);
			}
			else
			{
				printf("%d",1);
			}
		}
		k--;
		printf("\n");
	}
	
}
