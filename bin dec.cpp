#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int num,i=0,rem,sum=0;
	
	printf("Enter the num in binary form(0s & 1s):\n");
	scanf("%d",&num);
	
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem*pow(2,i);
		i++;
	}
	printf("decimal : %d",sum);
}
