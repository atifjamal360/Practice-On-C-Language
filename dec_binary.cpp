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
	do
	{
		rem[i]=num%2;
		num=num/2;
		i++;
		len++;
	}
	while(num!=0);
	printf("binary number is : ");
	for(i=len-1;i>=0;i--)
	{
		printf("%ld",rem[i]);
	}
}
