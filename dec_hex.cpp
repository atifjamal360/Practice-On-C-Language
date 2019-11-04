#include<stdio.h>
#include<conio.h>
#include<math.h>
long int dec_bin(long int);
int main()
{
	long int i,len=0,rem[50],num;
	printf("Enter number in decimal form: ");
	scanf("%ld",&num);
	
	dec_bin(num);
	return 0;
}
long int dec_bin(long int num)
{
	int rem[50],i,len=0;
	while(num!=0)
	{
		rem[i]=num%16;
		num=num/16;
		i++;
		len++;
	}
	printf("binary number is : ");
	for(i=len-1;i>=0;i--)
	{
		switch(rem[i])
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
				printf("%ld",rem[i]);
		}
		
	}
}
