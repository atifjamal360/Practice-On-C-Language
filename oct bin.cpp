#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	long int rem[10],len=0,decimal=0,i=0,octal,check,oct=0;
	
	printf("Enter the octal number: ");
	scanf("%ld",&octal);
	
	check=octal;
	
	while(check!=0){
    	oct=check%10;
    	if(oct>7)
    	{
    		printf("%d is not octal number",oct);
    		return 0;
		}
		else
		{
			check=check/10;
			i++;
		}
	}
	i=0;
	oct=0;
	while(octal!=0){
    	oct=octal % 10;
         decimal = decimal + oct * pow(8,i);
         i++;
         octal = octal/10;
    }
    
    i=0;
    do
	{
		rem[i]=decimal%2;
		decimal=decimal/2;
		i++;
		len++;
	}
	while(decimal!=0);
	
	printf("binary number is : ");
	for(i=len-1;i>=0;i--)
	{
		printf("%ld",rem[i]);
	}
	return 0;
}
