#include<stdio.h>
#include<math.h>

int main()
{
	int num,i,n=0,check=0,sum=0;
	
	printf("ARMSTRONG NUMBER B/W 1 TO 2000:\n");
	
	for(i=1;i<=2000;i++)
	{
		n=0,sum=0;
		num=i;
		
		if(i<1000)
		{
			n=3;
		}
		else
		{
			n=4;
		}
		
		num=i;
		while(num!=0)
		{
			check=num%10;
			sum=sum+pow(check,n);
			num/=10;
		}
		if(sum==i)
		printf("\n%d",i);
	}
}
