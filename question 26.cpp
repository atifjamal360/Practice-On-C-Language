/*
9
0 1
2 3 4
5 6 7 8
9 0 1 2 3
*/

#include<stdio.h>

int main()
{
	int i,j,rows,num=9,value=9;
	
	printf("Enter No. Of Rows: ");
	scanf("%d",&rows);
	
	printf("\n");
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",num);
			num++;
			if(num>9)
			num=0;
		}
		printf("\n");
	}
}
