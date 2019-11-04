/*
ABCBA
AB BA
A   A
AB BA
ABCBA
*/

#include<stdio.h>

int main()
{
	int i,j,k=0;
	char a;
	for(i=1;i<=5;i++)
	{
		i<=3?k++:k--;
		a=64;
		for(j=1;j<=5;j++)
		{
			j<=3?a++:a--;
			if(j<=4-k || j>=2+k)
			{
				printf("%c",a);
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}
