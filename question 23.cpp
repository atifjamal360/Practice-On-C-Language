/*
		1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5

*/

#include<stdio.h>

int main()
{
	int i,j,sp,num;
	
	for(i=1;i<=5;i++)
	{
		num=i;
		for(sp=i;sp<=5;sp++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",num);
			num++;
		}
		num--;
		num--;
		for(j=1;j<i;j++)
		{
			printf("%d ",num);
			num--;
		}
		printf("\n");
	}
}
