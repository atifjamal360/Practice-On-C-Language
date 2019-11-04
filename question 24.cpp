/*
           1
         1   1
       1   2   1
     1   3   3   1
   1   4   6   4   1
*/

#include<stdio.h>

int main()
{
	int i,j,sp,n,no;
	
	printf("Enter A Rows: ");
	scanf("%d",&no);
	
	for(i=1;i<=no;i++)
	{
		for(sp=i;sp<=no;sp++)
		{
			printf(" ");
		}
		n=1;
		for(j=1;j<=i;j++)
		{
			printf("%d ",n);
			n=n*(i-j)/j -1;
			n++;
		}
		printf("\n");
	}
	return 0;
}
