
//Sum of first digit number and last digit number....


#include<stdio.h>

int main (){
	
	int sum,num,value,i,last,first;
	
	printf("Enter any number\n");
	scanf("%d",&num);
	
	last=num%10;
	
	while (num>=10)
	{
	num=num/10;
	}
	first=num%10;
	
	sum=first+last;
	
	printf("The sum of %d number and %d number is = %d",first,last,sum);
	
}
