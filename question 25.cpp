/*
	 A
    ABA
   ABCBA
  ABCDCBA
   ABCBA
    ABA
     A
*/

#include<stdio.h>

int main()
{
	int space,i,j,rows,e,sp,disp;
	char alpha;
	
	printf("Enter No. Of Rows: ");;
	scanf("%d",&rows);
	
	printf("\n");
	
	space=rows;
	
	for(i=1;i<=rows;i++)
	{
		for(sp=1;sp<=space;sp++)
		{
			printf(" ");
		}
		space--;
		
		alpha='A';
		for(j=1;j<=i;j++)
		{
			printf("%c",alpha);
			alpha++;
		}
		alpha--;
		alpha--;
		
		for(j=1;j<i;j++)
		{
			printf("%c",alpha);
			alpha--;
		}
		printf("\n");
	}
	space=2;
	e=rows-2;
	disp=rows;
	
	for(i=1;i<=rows;i++)
	{
		for(sp=1;sp<=space;sp++)
		{
			printf(" ");
		}
		space++;
		
		alpha='A';
		for(j=1;j<disp;j++)
		{
			printf("%c",alpha);
			alpha++;
		}
		disp--;
		alpha--;
		alpha--;
		
		for(j=1;j<=e;j++)
		{
			printf("%c",alpha);
			alpha--;
		}
		e--;
		printf("\n");
	}
	return 0;
}
