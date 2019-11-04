// if num complete divisble by 2 then add 0 else add 1 in the number..

#include <stdio.h>

int main()
{
	int orig_num,num,sum=0,zero=0,one=1;
	
	printf("enter number : ");
	scanf("%d",&num);
	
	orig_num=num;

	if(num%2==0)
	{
		printf("\nOiginal num is : %d",orig_num);
		printf("\nNew number is %d%d",orig_num,zero);
	}
	else
	{
		printf("Original num is : %d",orig_num);
		printf("\nNew number is %d%d",orig_num,one);
	}
	return 0;
}
