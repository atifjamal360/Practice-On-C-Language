// C program to check perfect number

#include<stdio.h>

int main()
{
	int original,check=0,i,number;
	
	printf("ENTER A NUMBER:");
	scanf("%d",&number);
	
	original=number;
	
	for(i=1;i<number;i++)
	{
		if(number%i==0)
		{
			check=check+i;
		}
	}
	if(check==original)
	{
		printf("\n\"%d\" IS PERFECT NUMBER.",original);
	}
	else
	printf("\n\"%d\" IS NOT PERFECT NUMBER.",original);
	
	return 0;
}
