/*
1
1 4 9
1 4 9 16 25
1 4 9 16 25 36 49
1 4 9 16 25 36 49 64 81
*/

#include<stdio.h>

int main()
{
	int i,j,num,k=0,rows;
	printf("Enter No. Of Rows: ");
	scanf("%d",&rows);
	
	printf("\n");
	
	for(i=1;i<=rows;i++)
	{
		num=1;
		for(j=1;j<=i+k;j++)
		{
			printf("%d ",num*num);
			num++;	
		}
		k++;
		printf("\n");
	}
	
	return 0;
}
