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
		remain[i]=sum%16;
		sum=sum/16;
		i++;
		len++;
	}
	printf("binary number is : ");
	for(i=len-1;i>=0;i--)
	{
		switch(remain[i])
		{
			case 10:
				printf("A");
				break;
			
			case 11:
				printf("B");
				break;
				
			case 12:
				printf("C");
				break;
				
			case 13:
				printf("D");
				break;
				
			case 14:
				printf("E");
				break;
				
			case 15:
				printf("F");
				break;
				
			default:
				printf("%lld",remain[i]);
		}
		
	}
}
