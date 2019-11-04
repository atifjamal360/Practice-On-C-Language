#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	long long int num,i=0,rem,sum=0,remain[100],len=0;
	
	
	printf("Enter the num in binary form(0s & 1s):\n");
	scanf("%lld",&num);
	
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem*pow(2,i);
		i++;
	}
	i=0;
	while(sum!=0)
	{
		remain[i]=sum%8;
		sum=sum/8;
		i++;
		len++;
	}
	printf("octal number is : ");
	for(i=len-1;i>=0;i--)
	{
		printf("%lld",remain[i]);
	}
}
